/*
    1. Use Smart Pointers for Memory Management
    • CERT Number: MEM51-CPP
    • Description: Manually managing memory using new and delete can be error-prone. 
      Instead, we should use smart pointers like std::unique_ptr or std::shared_ptr, 
      which automatically handle memory cleanup.
*/


#include <iostream>
#include <memory>

void smart_pointer_example() {
    std::unique_ptr<int> number = std::make_unique<int>(42);
    std::cout << "Number: " << *number << std::endl; // Safe access
}

int main() {
    smart_pointer_example();
    return 0;
}