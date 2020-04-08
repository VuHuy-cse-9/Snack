#include<iostream>

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
    Game() : isLost(false), control('w'){};
    void setControl(char key);
    char getControl();
    bool endGame();
    void creatGame();
    void startGame();
};