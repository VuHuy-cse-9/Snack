#ifndef OBJECT_H
#define OBJECT_H

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Object {
private:
    //Location, size, effect
    int location[2];
    int size[2];
public:
    Object();
    int* getLocation();
    void setLocation(int x, int y);
    void setSize(int height, int width);
    int* getSize();
};

#endif