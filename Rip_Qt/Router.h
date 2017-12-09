//
// Created by lwen on 2017/11/22.
//

#ifndef PRACTICE_ROUTER_H

#include <map>
#include <vector>
#include <string>
#include <QLabel>
#include <QMovie>
#include <iostream>

#define PRACTICE_ROUTER_H
using namespace std;

class Router {
public:
    string m_Name;
    map<string,int> m_DV;
    vector<Router*> m_Neighbor;
    QLabel* label;
public:
    Router();
    explicit Router(const string& name);
//    Router(map<Router*,int> DV,vector<string> neighbor);
    virtual ~Router();
    void addNeighbor(Router* router);
    void addDV(string name,int vec);
    void updateDV(string name,int vec);
    void deleteDV(string name);
    void initDV();
    string getName();
    void printCurrentNeighbor();
    void printCurrentDV();
    void sendInfoToNeighbor(QMovie* movie);
    map<string,int>& getDV();
    void setLable(QMovie* movie);
    void removeLable();
    void initLable(QLabel* lable);


};


#endif //PRACTICE_ROUTER_H
