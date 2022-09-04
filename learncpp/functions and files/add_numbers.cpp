#include <iostream>

int readNumber() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x) {
    std::cout << x;
}

int main() {
    int x, y;
    x = readNumber();
    y = readNumber();
    std::cout << "The sum of " << x << " and " << y << " is ";
    writeAnswer(x + y);
}
