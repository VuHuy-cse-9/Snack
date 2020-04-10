#ifndef MAP_H
#define MAP_H

#include<iostream>
#include "Object.h"

using namespace std;
class Map : public Object{
private:
    char** map;
public:
    Map(int x, int y, int width, int height, char custom);
    void setObjectLocation(Object& object);
    void assignObjectOnMap(Object& object);
    void printMap();
};

#endif