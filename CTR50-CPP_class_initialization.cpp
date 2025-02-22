/*
    3. Always Initialize Class Members
    • CERT Number: CTR50-CPP
    • Description: Class members should always be initialized in the constructor 
      to prevent unintended behavior or garbage values.
*/


class Account {
    int balance;
public:
    Account() : balance(0) {} // Proper initialization
};