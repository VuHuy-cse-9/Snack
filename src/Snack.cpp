#include "Snack.h" 

enum ArrowKey{
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT 
};

enum Size {
    WIDTH,
    HEIGHT
};

enum Location {
    X,
    Y
};

void Snack::creatSnack(char _shape, int _x, int _y, int i = 0) {
    if (i < this->getSize()[HEIGHT]) {
        Node* body = new Node();
        if (i == 0) {
            this->head = body;
        }
        if (i != 0) {
            if (!head->nextptr) head->nextptr = body;
            this->tail->nextptr = body;
        }
        this->tail = body;
        body->shape = _shape;
        body->x = _x;
        body->y = _y;
        creatSnack(_shape, body->x, body->y - 1, i + 1);
    }
}

//Just use length = height in Snack
Snack::Snack (int _x, int _y, int width, int height, char _shape) 
: Object(_x, _y, width, height, _shape) {
    this->orient = FORWARD;
    creatSnack(_shape, _x, _y);
}

void Snack::setOrient(char _orient) {
    this->orient = _orient;
}

char Snack::getOrient() {
    return this->orient;
}

Node* Snack::getHead() {
    return this->head;
}

void Snack::setSnack(char _shape, int _x, int _y, int i = 0) {
    //TODO:
}

void Snack::move() {
    int x = this->getLocation()[X];
    int y = this->getLocation()[Y];
    switch (this->orient)
    {
        case FORWARD: {
            this->setLocation(x, y + 1);
            setSnack(this->getShape(), x, y + 1);
            break;
        }
        case BACKWARD: { 
            this->setLocation(x, y - 1);
            setSnack(this->getShape(), x, y- 1);
            break;
        }
        case LEFT: {
            this->setLocation(x - 1, y);
            setSnack(this->getShape(), x - 1, y);
            break;
        }
        case RIGHT: { 
            this->setLocation(x + 1, y);
            setSnack(this->getShape(), x + 1, y);
            break;
        } 
    }
}