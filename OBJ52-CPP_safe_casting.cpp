/*
    2. Use Dynamic Cast for Type Safety
    • CERT Number: OBJ52-CPP
    • Description: Using dynamic_cast helps ensure safe type conversions between 
      base and derived classes. Without it, invalid casts can lead to undefined behavior.
*/



#include <iostream>

class Animal {
public:
    virtual ~Animal() {} // Virtual destructor needed for dynamic_cast
};

class Dog : public Animal {};

void check_cast(Animal* pet) {
    Dog* dog = dynamic_cast<Dog*>(pet);
    if (dog) {
        std::cout << "It's a dog!\n";
    } else {
        std::cout << "Not a dog.\n";
    }
}

int main() {
    Dog myDog;
    check_cast(&myDog);
    return 0;
}