#include "Map.h"

enum Size {
    WIDTH,
    HEIGHT
};

enum Location {
    X,
    Y
};

Map::Map(int x, int y, int width, int height, char custom) : Object(x, y, width, height, custom){
    //Error:Can't take value from this
    this->map = new char*[this->getSize()[WIDTH]];
    for (int i = 0; i < this->getSize()[HEIGHT]; i++) {
        map[i] = new char[this->getSize()[WIDTH]];
    }
    for (int i = 0; i < this->getSize()[0]; i++) {
        for (int j = 0; j < this->getSize()[1]; j++) {
            map[i][j] = this->getShape();
        }
    }
}

void Map::setObjectLocation(Object& object) {
    this->map[object.getLocation()[X]][object.getLocation()[Y]] = object.getShape();
    
    if (object.getSize()[WIDTH] > 1) {
        if (object.getLocation()[X] + object.getSize()[WIDTH] -1 <= this->getSize()[WIDTH]);
            for (int i = 1; i < object.getLocation()[WIDTH]; i++) {
                this->map[object.getLocation()[X] + i][object.getLocation()[Y]] = object.getShape();
            }
    }
    //TODO:Review when creat real object
     if (object.getSize()[HEIGHT] > 1) {
        if (object.getLocation()[X] + object.getSize()[HEIGHT] -1 <= this->getSize()[HEIGHT]);
            for (int i = 1; i < object.getLocation()[HEIGHT]; i++) {
                this->map[object.getLocation()[X]][object.getLocation()[Y] + i] = object.getShape();
            }
    }
}

void Map::printMap() {
    for (int i = 0; i < this->getSize()[WIDTH]; i++) {
        for (int j = 0; j < getSize()[HEIGHT]; j++) {
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }
}