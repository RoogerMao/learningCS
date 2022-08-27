#include "pch.h"
//preprocessor directive, tells the compiler to include the iostream library
#include <iostream>

/*
* main() is a function, a block of statements. when a program is run, all the statements in main are executed
*/
int main()
//braces are used to define the range of statements inside main
{
    /*std::cout is the standard character output stream(the terminal in this case)
    * << is a shift operator, tells the compiler to move whatever's to the right of it into whatever's to the left of it
    */
    std::cout << "Hello, world!";
    //gives a number back to the compiler, 0 means that everything executed successfully
    return 0;
}