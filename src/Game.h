#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "Object.h"
#include "Map.h"
#include "Snack.h"
#include "Candy.h"
#include<ctime>
#include <chrono>
#include<fstream>

class Game {
private:
    bool isLost;
    Map* map;
    Snack* snack;
    Candy* candy;
public:
    Game();
    bool endGame();
    void creatObject(ifstream& file);
    void startGame();
    void animation();
};

#endif