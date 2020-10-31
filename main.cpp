#include <iostream>

int main() {

    int variable = 8;

    int* ptr; // empty!!! ----> Null Pointer

    std::cout << ptr << std::endl;
    // std::cout << *ptr << std::endl; -- Don't uncomment, will blow up!

    return 0;
}