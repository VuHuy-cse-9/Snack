#include "Game.h"

Game::Game(int _numberOfObjects) {
    this->object = NULL;
    this->numberOfObjects = _numberOfObjects;
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
    file.seekg(0, file.end);
    int length = file.tellg();
    file.seekg(0, file.beg);

    Object objectArray[numberOfObjects];
    this->object = objectArray;
    for (int i = 0; i < numberOfObjects; i++) {
        file >> x >> y >> height >> width;
        this->object[i].setLocation(x, y);
        this->object[i].setSize(height, width);
    }
}