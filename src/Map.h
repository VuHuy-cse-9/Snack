#ifndef MAP_H
#define MAP_H

#include<iostream>
#include "Object.h"
#include "Node.h"

using namespace std;
class Map : public Object{
private:
    char** map;
public:
    Map(int x, int y, int width, int height, char custom);
    void setObjectLocation(Object& object);
    void assignObjectOnMap(Object& object);
    void assignSnack(const Node* ptr);
    void printMap();
};

#endif