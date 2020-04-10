#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "Object.h"
#include<fstream>

class Game {
private:
    bool isLost;
    Object* object;
public:
    Game();
    bool endGame();
    void creatObject(ifstream& file);
    void startGame();
};

#endif