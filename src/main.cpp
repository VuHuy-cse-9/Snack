#include <iostream>
#include <fstream>
#include "Game.h"

using namespace std;

int main() {
    ifstream file;
    file.open("data.txt");
    Game game = Game(3);
    game.creatObject(file);
}