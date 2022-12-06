#include <iostream>
using namespace std;

class Counted{
    private:
        int id;
        static int count;

    public:
        Counted(): id(count++){
            cout<<"An object is being created, id: " << id << endl;
        }
        ~Counted(){
            cout<<"The created object is being destroyed, id: " << id << endl;
        }
};

int Counted::count = 0;

int main(){
    Counted count1;
    Counted count2;

    return 0;
}

