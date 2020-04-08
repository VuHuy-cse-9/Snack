#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Object {
private:
    ifstream objectFile;
    vector<char> object;
public:
    Object();
    vector<char> getObject();
};