#include <iostream>
using namespace std;

int& pointerModifier(int *x){
    //ptr is a reference to *x
    int& ptr = *x;
    ptr = ptr - 5;
    return ptr;
}

int main(){
    int x  = 12;
    cout<< "Before: "<< x <<endl;
    cout << "After: " << pointerModifier(&x) <<endl;

    return 0;
}