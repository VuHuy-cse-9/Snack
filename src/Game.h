#include<iostream>
#include"Object.h"

//Control board:
//Upward: w (default)
//Downward: s
//Left: a
//Right d
class Game {
private:
    bool isLost;
    char control;
public:
    Game();
    void setControl(char key);
    char getControl();
    bool endGame();
    void creatGame(const Object& object);
    void startGame();
};