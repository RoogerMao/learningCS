#include <iostream>

//this program will return double the value of a value input by the user

int doubleNumber(int x) {
    return 2 * x;
}

int main() {
    /* Procedure:
    1. Read input number from user
    2. Pass input to doubleNumber function
    3. Return output from doubleNumber function to user
    */
    int x; 
    std::cin >> x;
    std::cout << doubleNumber(x);
}
