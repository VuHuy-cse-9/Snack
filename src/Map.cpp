#include "Map.h"

enum Size {
    WIDTH,
    HEIGHT
};

enum Location {
    X,
    Y
};

Map::Map() {
    this->map = new char*[Object::getSize()[WIDTH]];
    for (int i = 0; i < Object::getSize()[HEIGHT]; i++) {
        map[i] = new char[Object::getSize()[WIDTH]];
    }
}

void Map::setObjectLocation(Object& object) {
    this->map[object.getLocation()[X]][object.getLocation()[Y]] = object.getShape();
    if (object.getSize()[WIDTH] > 0) {
        if (object.getLocation()[X] + object.getSize()[WIDTH] -1 <= Object::getLocation()[WIDTH]);
            for (int i = 0; i < object.getLocation()[WIDTH]; i++) {
                
            }
    }
}