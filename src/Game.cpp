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
}

bool Game::gameCondition() {
    Node* ptr = snack->getHead()->nextptr;
    if (
    snack->getLocation()[0] >= map->getSize()[WIDTH] || 
    snack->getLocation()[0] < 0 ||
    snack->getLocation()[1] >= map->getSize()[HEIGHT] ||
    snack->getLocation()[1] < 0 ||
    snack->isCollasp(ptr)) {
        return true;
    }
    return false;
}

void Game::pressKey() {
    char key;
    while(true) {
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
    }
}

void Game::startGame(){
    //TODO: 
     Node* ptr = snack->getHead();
     while(true) {
        

        snack->move();
        if (candy->isBeEaten(snack->getLocation()[0], snack->getLocation()[1])) {
            map->assignCandy(*(this->candy));
            snack->addTail();
        }
        if (gameCondition()) break;
        map->assignCandy(*(this->candy));
        map->assignSnack(ptr);
        map->printMap();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));    
    }
    cout << '\n' << "<<<<<<<<<<END GAME>>>>>>>>>>>" << '\n';
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
    thread th(&Game::startGame, this);
    pressKey();
    th.join();
}