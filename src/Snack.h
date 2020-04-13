#include<iostream>
#include"Object.h"
#include"Node.h"

using namespace std;

class Snack : public Object {
private:
    Node* head;
    Node* tail;
    char orient;
public:
    Snack(int x, int y, int width, int height, char shape);
    void setOrient(char _orient);
    char getOrient();
    void creatSnack(char _shape, int _x, int _y, int i);
    void setSnack(char shape, int x, int y, Node* ptr);
    Node* getHead();
    void move();
    void addTail();
    bool isCollasp(Node* ptr);
};