#include <iostream>
#include <fstream>
#include "Game.h"

using namespace std;

int main() {
    ifstream file;
    file.open("data/data.txt");
    Game game = Game();
    game.creatObject(file);
}