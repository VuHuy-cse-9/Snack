#include<iostream>
#include "Object.h"

using namespace std;

class Candy : public Object{
public:
    Candy(int x, int y, int height, int width, char custom);
};