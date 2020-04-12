#include "Game.h"

enum ObjectName {
    MAP,
    SNACK,
    CANDY,
    NUMBEROFOBJECTS
};

enum Size {
    WIDTH,
    HEIGHT
};

enum ArrowKey{
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT 
};

Game::Game() {
    this->map = NULL;
    this->snack = NULL;
    this->isLost = false;
}

bool Game::endGame() {
    if (this->isLost) { 
        return true;
    }
    return false;
}

void Game::startGame(){
    //TODO: 
    char key;
    Node* ptr = snack->getHead();
    while(!endGame()) {
        cin >> key;
        switch (key)
        {
            case 'w':this->snack->setOrient(FORWARD);
                break;
            case 's':this->snack->setOrient(BACKWARD);
                break;
            case 'a':this->snack->setOrient(LEFT);
                break;
            case 'd':this->snack->setOrient(RIGHT);
                break;
        }
        snack->move();
        map->assignSnack(ptr);
        map->printMap();
    }

}

void Game::creatObject(ifstream& file) {
    //TODO:Add object attributes
    int x, y, height, width;
    char custom;

    //TODO:Bugs here
    file.seekg(0, file.end);
    int length = file.tellg();
    file.seekg(0, file.beg);

    for (int i = 0; i < NUMBEROFOBJECTS; i++) {
        file >> x >> y >> width >> height >> custom;
        if (i == 0) this->map = new Map(x, y, width, height, custom);
        if (i == 1) this->snack = new Snack(x, y, width, height, custom);
        if (i == 2) this->candy = new Candy(x, y, width, height, custom);
    }
    Node* ptr = snack->getHead();
    map->assignSnack(ptr);
    map->assignCandy(*candy);
    map->printMap();   
    startGame();
}

// void Game::animation() {
//     TODO:Just 1 "thin" snack
//     for (int i = (*snack).getSize()[HEIGHT]; i > 1; i--) {
//         this->map[WIDTH][i] = this->map[WIDTH][i - 1]; 
//     }
//     this->map[WIDTH][0] = this->map[WIDTH][0]
    
// }