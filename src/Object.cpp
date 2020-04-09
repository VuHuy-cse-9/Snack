#include "Object.h"

Object::Object() {
    this->location[0] = 0;
    this->location[1] = 0;
    this->size[0] = 1;
    this->size[1] = 1;
}

int* Object::getLocation() {
    this->location;
}

int* Object::getSize() {
    return this->size;
}

void Object::setLocation(int x, int y) {
    this->location[0] = x;
    this->location[1] = y;
}

void Object::setSize(int height, int width) {
    this->size[0] = height;
    this->size[1] = width;
}