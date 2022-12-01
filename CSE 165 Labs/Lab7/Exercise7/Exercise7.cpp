#include <iostream>
#include <cstring>
using namespace std;

class MyClass {
    private:
        char myArray[10];
    public:
        MyClass(char c = ' ') { memset(myArray, c, 10); }

        void print() {
            for (size_t i = 0; i < 10; i++){
                cout << myArray[i] <<  endl;
            }
        }
};

int main() {

    MyClass myObj('A');
    myObj.print();

    return 0;
}