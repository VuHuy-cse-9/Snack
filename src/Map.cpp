#include "Map.h"

///////////////////////////////
/*            map[y][x]       */
///////////////////////////////

enum Size {
    WIDTH,
    HEIGHT
};

enum Location {
    X,
    Y
};

enum ArrowKey{
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT 
};
//Change
Map::Map(int x, int y, int width, int height, char custom) : Object(x, y, width, height, custom){
    //CREAT MAP ARRAY:
    this->map = new char*[this->getSize()[HEIGHT]];
    for (int i = 0; i < this->getSize()[HEIGHT]; i++) {
        map[i] = new char[this->getSize()[WIDTH]];
        for (int j = 0; j < this->getSize()[WIDTH]; j++) {
            map[i][j] = this->getShape();
        }
    }
}

void Map::printMap() {
    for (int i = 0; i < this->getSize()[HEIGHT]; i++) {
        for (int j = 0; j < getSize()[WIDTH]; j++) {
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }
}

void Map::assignSnack(Node* ptr) {
    if (ptr != nullptr) {
        this->map[ptr->y][ptr->x] = ptr->shape;
        this->map[ptr->lastLocation[1]][ptr->lastLocation[0]] = this->getShape();
        ptr = ptr->nextptr;
        assignSnack(ptr);
    }
}

void Map::assignCandy(Candy& candy) {
    this->map[candy.getLocation()[HEIGHT]][candy.getLocation()[WIDTH]] = candy.getShape();
}