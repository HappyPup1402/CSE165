#include <iostream>

using namespace std;

class MyClass {
    public:
        class MyException {
            const char* myString;
            public:
                MyException(const char* str){
                    myString = str;
                }

                void printException() {
                    cout << myString << endl;
                }
        };

        void myFun(){
            throw MyException("Hello");
        }
};

int main() {
    MyClass myObj;

    try{
        myObj.myFun();
    }

    catch(MyClass::MyException test){
        test.printException();
    }

    return 0;
}