#include <iostream>

int readNumber();
void writeAnswer(int x);

int main()
{
    int x, y;
    x = readNumber();
    y = readNumber();
    std::cout << "The sum of " << x << " and " << y << " is ";
    writeAnswer(x + y);
}
