#ifndef MAP_H
#define MAP_H

#include<iostream>
#include "Node.h"
#include "Candy.h"

using namespace std;
class Map : public Object{
private:
    char** map;
public:
    Map(int x, int y, int width, int height, char custom);
    void assignCandy (Candy& candy);
    void assignSnack(Node* ptr);
    void printMap();
};

#endif