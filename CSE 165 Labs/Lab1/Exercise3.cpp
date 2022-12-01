#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string str;
    for(;;){
        int x;
        cin >> str;
        if(str == "exit" || str == "end"){
            break;
        }
        else if(str == "a" || str == "an" || str == "the"){
            x = 1;
        }
        else if(str == "before" || str == "after"){
            x = 2;
        }
        else if(str == "who" || str == "what" || str == "where" || str == "when" || str == "why"){
            x = 3;
        }
        else{
            x = 4;
        }
        switch(x){
            case 1:
                puts("case1 mapped");
                break;
            case 2:
                puts("case2 mapped");
                break;
            case 3:
                puts("case3 mapped");
                break;
            case 4:
                puts("unmapped word");
                break;

        }
    }
    return 0;
}