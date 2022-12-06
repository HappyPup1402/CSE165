#ifndef MYHEADER2_H_INCLUDED
#define MYHEADER2_H_INCLUDED

#include <iostream>
#include "myHeader1.h"

namespace MyNamespace{
    void func3(){
        std::cout << "func3() called." << std::endl;
    }
    void func4(){
        std::cout << "func4() called." << std::endl;
    }
}


#endif