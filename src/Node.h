#ifndef NODE_H
#define NODE_H

class Node {
public:
    int x, y;
    int lastLocation[2];
    char shape;
    Node* nextptr;
    Node();
};

#endif  