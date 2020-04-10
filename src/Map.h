#ifndef MAP_H
#define MAP_H

#include<iostream>
#include "Object.h"

using namespace std;
class Map : public Object{
private:
    char** map;
public:
    Map();
    void setObjectLocation(Object& object);
};

#endif