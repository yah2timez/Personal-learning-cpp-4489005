// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;             // a is a variable
    int*ptr;               // ptr is a integer pointer

    ptr = &a;             // the pointer points to the address of a

    std::cout << "  The content of a is " << a << std::endl;
    std::cout << "  prt is pointing to address " << ptr << std::endl;
    std::cout << "  The address of a is " << &a << std::endl;
std::cout << " Where ptr is pointing, we have " << *ptr << std::endl;
std::cout << "       The address of the ptr is " << &ptr << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
