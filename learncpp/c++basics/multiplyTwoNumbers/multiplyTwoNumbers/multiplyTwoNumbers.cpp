#include <iostream>

// this program returns the product of two numbers
int main()
{
    /* Procedure:
    1. Prompt the user to input two numbers
    2. Calculate the product
    3. Return the product
    */
    std::cout << "Enter in the first number: ";
    int a, b;
    std::cin >> a;
    std::cout << '\n' << "Enter in the second number: ";
    std::cin >> b;
    //output expression of a * b, not modifying either since we want to access them
    std::cout << "The product of " << a << " and " << b << " is " << a * b;
}
