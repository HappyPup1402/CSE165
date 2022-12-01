#include <iostream>
#include <string>

using namespace std;

class Pet{
    string pname;
    public:
        Pet(const string& petName) : pname(petName) {}
        virtual string name() = 0;
        virtual string speak() = 0;
        virtual string sit() = 0;
        virtual ~Pet(){};
};

string Pet::name(){return pname;}

class Dog : public Pet{
    public:
        Dog(const string& petName) : Pet(petName){}

        virtual string sit(){
            return Pet::name() + " sits";
        }
        string speak(){
            return Pet::name() + " says 'Bark!'";
        }
        string name(){
            return Pet::name();
        }
};

int main() {

    Pet* p = new Dog("benny");

    cout << p->speak() << endl;
    cout << p->name() <<endl;
    cout<< p->sit() <<endl;

    delete p;

    return 0;
}