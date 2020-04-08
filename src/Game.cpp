#include "Game.h"

Game::Game() {
    this->isLost = false;
    this->control = 'w';
}

void Game::setControl(char key) {
    this->control = key;
}

char Game::getControl() {
    return this->control;
}

bool Game::endGame() {
    if (this->isLost) {
        return true;
    }
    return false;
}

void Game::creatGame(const Object& object) {
    //TODO:Creat Components
}

void Game::startGame(){
    while(!endGame) {

    }
}
