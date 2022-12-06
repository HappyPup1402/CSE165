#include <iostream>
#include <vector>

using namespace std;

class Counted {
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

int main() {

    vector<Counted*> v;

    //Filling vector
    for (int i = 0; i < 5; i++){
        v.push_back(new Counted);
    }

    //Deleting vector
    while (v.size() > 0) {
        Counted* temp = v.back();
        v.pop_back();
        delete temp;
    }

return 0;
}