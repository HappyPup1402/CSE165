#include <iostream>
using namespace std;

char* copyString(char* str){
    int length, i;

    while(str[length] != '\0'){
        length++;
    }

    char* copiedStr = new char[length];

    for(i = 0; i < length; i++){
        copiedStr[i] = str[i];
    }

    copiedStr[i] = '\0';

    return copiedStr;
}

int main(){
    char* quote = "I like tacos";
    cout<< "Original sentence: "<< quote << endl;
    char* copy = copyString(quote);
    cout<< "Copied sentence: "<< copy << endl;
    cout<< "address of copy: " << &copy <<endl;
    char* copy2 = copyString(copy);
    delete[] copy;
    cout<< "Copied2 sentence " << copy2 <<endl;
    cout<< "address of copy2: "<< &copy2 <<endl;
    delete[] copy2;
    return 0;
}