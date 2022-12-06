#include <string>
#include<iostream>
using namespace std;

class Dish {
    private:
        string type;
        string name;
        int calories;

    public:
        Dish(){
            type = "";
            name = "";
            calories = 0;
        }

        Dish(string t, string n, int c){
            type = t;
            name = n;
            calories = c;
        }

        void print(){
            cout<< "Type: " << type <<endl;
            cout<< "Name: " << name<<endl;
            cout<< "calories: " << calories << endl;
        }
};

class Chief {
    private:
        string name;
        string resturant;
        int stars;
    public:
        Chief(){
            name = "";
            resturant = "";
            stars = 0;
        }

        Chief(string n, string r, int s){
            name = n;
            resturant = r;
            stars = s;
        }

        void print(Dish* ptr){
            cout<< "name: " << name <<endl;
            cout<< "resturant: " << resturant<<endl;
            cout<< "stars: " << stars << endl;
            ptr->print();
        }
};

int main(){
    Dish obj("English", "Beef Wellington", 800);

    Dish* obj2 = &obj;

    Chief obj3("Gordon Ramsey", "Hells Kitchen", 3);

    obj3.print(obj2);
}