#include "Object.h"

Object::Object() {
    this->objectFile.open("customObject.txt");
    objectFile.seekg(0, objectFile.end);
    int length = objectFile.tellg();
    objectFile.seekg(0, objectFile.beg);

    if(!objectFile) {
        cout << "Custom your object!";
        return;
    }

    //Only receive 1 character
    char k;
    this->objectFile >> k;
    this->object.push_back(k); 

    this->objectFile.close();    
}

vector<char> Object::getObject() {
    return this->object;
}