#include "Game.h"

enum ObjectName {
    MAP,
    SNACK,
    CANDY,
    NUMBEROFOBJECTS
};

Game::Game() {
    this->object = NULL;
    this->isLost = false;
}

bool Game::endGame() {
    if (this->isLost) { 
        return true;
    }
    return false;
}

void Game::startGame(){
    //Give keyboard for effect
    while(!endGame()) {
        
    }
}

void Game::creatObject(ifstream& file) {
    //TODO:Add object attributes
    int x, y, height, width;

    //TODO:Bugs here
    file.seekg(0, file.end);
    int length = file.tellg();
    file.seekg(0, file.beg);

    Object objectArray[NUMBEROFOBJECTS];
    this->object = objectArray;
    for (int i = 0; i < NUMBEROFOBJECTS; i++) {
        file >> x >> y >> height >> width;
        this->object[i].setLocation(x, y);
        this->object[i].setSize(height, width);
    }
}