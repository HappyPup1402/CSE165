#include <iostream>

using namespace std;

class Subject {
    public:
        virtual void f(){
            cout << "Subject f() was called." << endl;
        }
        virtual void g(){
            cout << "Subject g() was called." << endl;
        }
        virtual void h(){
            cout << "Subject h() was called." << endl;
        }
};

class Proxy : public Subject {
    private:
        Subject* ptr;

    public:
        Proxy(Subject* s) : Subject(), ptr(s) {}

        void f(){
            ptr->f(); 
        }

        void g(){ 
            ptr->g(); 
        }

        void h(){ 
            ptr->h();
        }

        void setImplementation(Subject* s){
            ptr = s; 
        }
};

class Implementation1 : public Subject {
    public:
        void f(){
            cout << "Imp1 f() was called." << endl;
        }

        void g(){
            cout << "Imp1 g() was called." << endl;
        }

        void h(){
            cout << "Imp1 h() was called." << endl; 
        }
};

class Implementation2 : public Subject {
    public:
        void f(){
            cout << "Imp2 f() was called." << endl; 
        }

        void g(){
            cout << "Imp2 g() was called." << endl; 
        }

        void h(){
            cout << "Imp2 h() was called." << endl;
        }
};



int main() {

    Implementation1 imp1;
    Implementation2 imp2;

    Proxy p(&imp1);

    p.f(); p.g(); p.h();

    p.setImplementation(&imp2);
    
    cout << "Implementation changed." << endl;

    p.f(); p.g(); p.h();

return 0;
}