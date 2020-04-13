#ifndef CANDY_H
#define CANDY_H

#include<iostream>
#include "Object.h"
#include<math.h>

using namespace std;

class Candy : public Object{
public:
    Candy(int x, int y, int height, int width, char custom);
    bool isBeEaten(int x, int y);
};

#endif