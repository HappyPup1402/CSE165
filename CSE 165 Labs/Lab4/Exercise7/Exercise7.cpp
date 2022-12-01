#include <iostream>
using namespace std;

void modifyArguement(int**& ptr){
    //original arguement points to the begining of the aray. after this function, it will point
    // to the second position in the array
    (*ptr)++;
}

int main(){
    int array[] = {0,1};

    int *ptr = array;

    //ptr2 points to the pointer ptr
    int **ptr2 = &ptr;

    cout << "Before: " << *(*ptr2) << endl;
    modifyArguement(ptr2);
    cout << "After: " << *(*ptr2)<< endl;

    return 0;
}