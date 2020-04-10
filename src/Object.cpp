#include "Object.h"

Object::Object(int x, int y, int height, int width) {
    this->location[0] = x;
    this->location[1] = y;
    this->size[0] = width;
    this->size[1] = height;
}

int* Object::getLocation() {
    return this->location;
}

int* Object::getSize() {
    return this->size;
}

void Object::setLocation(int x, int y) {
    this->location[0] = x;
    this->location[1] = y;
}

void Object::setSize(int height, int width) {
    this->size[0] = width;
    this->size[1] = height;
}

void Object::customObject(char _shape){
    this->shape = _shape;
}

char Object::getShape() {
    return this->shape;
}