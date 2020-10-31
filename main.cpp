#include <iostream>

int main() {

    int variable = 8;

    int* ptr; // empty!!! ----> Null Pointer

    std::cout << ptr << std::endl;
    // std::cout << *ptr << std::endl; -- Don't uncomment, will blow up!

    std::cout << "Memory address of variable: " << &variable << std::endl;
    std::cout << "Memory address of ptr: " << &ptr << std::endl;

    ptr = &variable;

    std::cout << *ptr << std::endl;

    *ptr = 25;

    std::cout << variable << std::endl;

    return 0;
}