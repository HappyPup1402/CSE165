#include <iostream>
using namespace std;
class myClass {
    private:
        const float f1;
        float f2;
    public:
        myClass(float f1, float f2) : f1(f1), f2(f2) {}
        void print() const {
            cout << "f1(constant)= " << f1 << ", f2(nonconstant)= " << f2 << endl;
        }
};

int main() {

    myClass(1.5, 1.6).print();

return 0;
}