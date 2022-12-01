#include <iostream>

using namespace std;

class mySimpleClass {
    private:
        int x;
    public:
        mySimpleClass() : x(0) {}
        mySimpleClass(int x) : x(x) {}

        const mySimpleClass operator+(const mySimpleClass& right) const {
            return mySimpleClass(x + right.x);
        }

        const mySimpleClass operator*(const mySimpleClass& right) const {
            return mySimpleClass(x * right.x);
        }

        void print(ostream& out){
            out << x << endl; 
        }
};

int main() {

    mySimpleClass a(1), b(2);
    mySimpleClass c = a * a + b * b;
    c.print(cout);


return 0;
}