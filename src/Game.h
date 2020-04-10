#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "Object.h"
#include "Map.h"
#include<fstream>

class Game {
private:
    bool isLost;
    Map* object;
public:
    Game();
    bool endGame();
    void creatObject(ifstream& file);
    void startGame();
};

#endif