#include <iostream>

using namespace std;

template <class T>
T fibonacci(T n) {
    const int size = 100;
    static T arr[size];
    arr[0] = arr[1] = 1;

    int i = 2;
    
    while(i <= n) {
        arr[i] = arr[i-1] + arr[i-2];
        i++;
    }
    return arr[n-1];
}


int main() {

    cout << fibonacci(20) << endl;

return 0;
}