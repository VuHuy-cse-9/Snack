#include<iostream>
#include"Object.h"

using namespace std;

class Snack : public Object {
private:
public:
    Snack(int x, int y, int width, int height, char shape);
};