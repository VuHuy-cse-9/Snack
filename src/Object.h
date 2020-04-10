#ifndef OBJECT_H
#define OBJECT_H

#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Object {
private:    //Location, size, effect
    int location[2];
    int size[2];
    char shape;
public:
    Object(int x, int y, int width, int hieght, char custom); //Assign
    int* getLocation();
    void setLocation(int x, int y);
    void setSize(int height, int width);
    int* getSize();
    void customObject(char shape);
    char getShape();
};

#endif