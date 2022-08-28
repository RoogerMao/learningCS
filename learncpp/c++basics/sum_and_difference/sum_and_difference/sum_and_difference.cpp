#include <iostream>

//this program will output the sum and difference of two numbers the user inputs
int main()
{
    /*Procedure
    1. Prompt the user to input two numbers
    2. Calculate the sum and difference
    3. Return the sum and difference to the user
    */
    int x, y;
    std::cout << "Enter in an integer: ";
    std::cin >> x;
    std::cout << "Enter in another integer: ";
    std::cin >> y;
    std::cout << x << " + " << y << " is " << x + y << std::endl;
    std::cout << x << " - " << y << " is " << x - y;
}
