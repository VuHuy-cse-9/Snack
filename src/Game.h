#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "Object.h"
#include "Map.h"
#include "Snack.h"
#include "Candy.h"
#include<ctime>
#include<chrono>
#include<thread>
#include<fstream>

class Game {
private:
    Map* map;
    Snack* snack;
    Candy* candy;
public:
    Game();
    void creatObject(ifstream& file);
    void startGame();
    void animation();
    bool gameCondition();
    void pressKey();
};

#endif