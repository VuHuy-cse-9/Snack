#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "Object.h"
#include<fstream>

class Game {
private:
    bool isLost;
    int numberOfObjects;
    Object* object;
public:
    Game(int _numberOfObjects);
    bool endGame();
    void creatObject(ifstream& file);
    void startGame();
};

#endif