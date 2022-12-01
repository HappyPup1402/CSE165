#include <iostream>
using namespace std;

class ArrayOfInts{
    public:
        int size;
        int arr[10] = {1,2,3,4,5,6,7,8,9,10};
        int *p;

        ArrayOfInts(){
            size = 10;
            p = arr;
        }

        void printContents(){
            for(int i = 0; i < size; i++){
                cout<<p[i]<<endl;
            }
        }
};

int main(){
    ArrayOfInts obj;

    obj.printContents();

    return 0;
}