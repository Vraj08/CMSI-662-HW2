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