//
// Created by lwen on 2017/11/22.
//

#include "Router.h"


Router::Router() = default;

void Router::addNeighbor(Router *router) {
    this->m_Neighbor.push_back(router);
}

void Router::addDV(string name, int vec) {
    this->m_DV.insert(make_pair(name,vec));
}

void Router::updateDV(string name, int vec) {
    this->addDV(name, vec);
}

map<string,int>& Router::getDV(){
    return this->m_DV;
}

void Router::setLable(QMovie *movie)
{
    this->label->setMovie(movie);
}

void Router::removeLable()
{
    this->label->setMovie(nullptr);
}

void Router::initLable(QLabel *lable)
{
    this->label=lable;
}

void Router::addLightSlot(int i, QMovie* movie)
{

}

void Router::deleteDV(string name) {
    this->m_DV.erase(name);
}

string Router::getName() {
    return this->m_Name;
}

void Router::initDV() {
    for(Router* router: this->m_Neighbor){
//        this->m_DV.insert(new pair<string,int>(router->m_Name,0));
//        string name=router->m_Name;
//        m_DV.insert(make_pair(name, 0));
        m_DV.insert(std::map< string,int >::value_type (router->m_Name,1));

    }
}

void Router::printCurrentNeighbor() {
    cout<<m_Name<<" CurrentNeighbor : "<<endl;
    for (Router *router:m_Neighbor) {
        cout<<router->m_Name<<endl;
    }
    cout<<"========================"<<endl;
}

void Router::printCurrentDV() {
    cout<<m_Name<<" CurrentDV : "<<endl;
    for (auto dv:m_DV) {
        //TODO::不知道为什么在clion上面这个地方没办法输出所有的信息  总是一半输出不出来
        cout<<dv.first<<" -----> "<<dv.second<<endl;
//        cout<<"ss"<<endl;
    }
    cout<<"========================"<<endl;
}

Router::Router(const string& name) {
    this->m_Name=name;
}


/**
 * 向相邻路由器发送信息
 */
void Router::sendInfoToNeighbor(QMovie* movie) {
    this->setLable(movie);
    for (Router* router:m_Neighbor) {
        router->setLable(movie);
        for (auto dv:m_DV) {
            auto index = (router->m_DV).find(dv.first);
            //如果该表项不存在就添加
            //TODO::这有一个巨大的坑，也就是当我们判断一个元素是否存在的时候必须要用==end而不是不等于，肯定不准
            if (index==router->m_DV.end()){
                router->m_DV.insert(make_pair(dv.first,dv.second+1));

            } else{//表项存在
                //如果路径短就添加
                if (index->second > dv.second - 1) {
                    router->m_DV.insert(make_pair(index->first,index->second+1));

                }
            }
        }
        movie->start();
        router->removeLable();
//        cout<<"============="<<endl;
    }
    auto index = m_DV.find(this->m_Name);
    if(index==m_DV.end()){

    }else{
        m_DV.erase(index);
    }
    this->removeLable();
}

Router::~Router() = default;
