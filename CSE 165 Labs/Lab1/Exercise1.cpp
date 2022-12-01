#include <iostream>
using namespace std;

int main(){
    double radius, area;
    cout << "Enter radius of circle: ";
    cin >> radius;
    area = (3.14)*radius*radius;
    cout << "\nArea of circle: " << area;

    return 0;
}