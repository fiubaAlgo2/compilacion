#ifndef COMPILACION_C_H
#define COMPILACION_C_H

#include<iostream>

//TODO: This raises a linker error. To solve it, only declare the function here and define it in the c.cpp
//TODO: Other option: Just Add 'inline' before the void sayHello() (NOT RECOMMENDED)
//TODO: Other option: Just Add 'static' before the void sayHello() (NOT RECOMMENDED)
void sayHello()
{
    std::cout << "Hello" << std::endl;
}

#endif //COMPILACION_C_H