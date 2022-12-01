#include <iostream>
#include "Handle.h"
using namespace std;

struct Handle::Cheshire{
    int i;
};

Handle::Handle(){
    cout<<"Object was created by constructor"<<endl;
};

void Handle::initialize(){
    smile = new Cheshire;
    smile->i = 0;
}

void Handle::cleanup(){
    delete smile;
}

int Handle::read(){
    return smile->i;
}

void Handle::change(int x){
    smile->i=x;
}

Handle::~Handle(){
    cout<<"Destructor destroyed the object"<<endl;
}