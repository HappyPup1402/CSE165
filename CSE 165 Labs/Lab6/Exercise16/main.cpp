#include "myHeader2.h"

namespace My = MyNamespace;

void test1(){
    My::func1();
    My::func2();
}

void test2(){
    using namespace My;
    func3();
    func4();
}

int main(){
    test1();
    test2();
    return 0;
}