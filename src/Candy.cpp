#include "Candy.h"

Candy::Candy(int x, int y, int width, int height, char custom) : 
Object(x, y, width, height, custom){
}

bool Candy::isBeEaten(int x, int y) {
    if (this->getLocation()[0] == x 
    && this->getLocation()[1] == y) {
        int i = floor((rand() % 100 / 5));// Random 0 -> 19; 
        this->setLocation(i, i);  
    }
}