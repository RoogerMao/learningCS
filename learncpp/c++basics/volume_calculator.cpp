#include <iostream>

//this program will calculate the volume of a rectangular prism given its dimensions
int main() {
	/* Procedure: 
	* 1. Prompt user for dimensions and input
	* 2. Calculate volume
	* 3. Output volume
	*/
	
	//int a, b, c;
	int a;
	int b{};
	int c(0);
	std::cout << "Enter in the dimensions of the rectangular prism seperated by spaces: ";
	std::cin >> a >> b >> c;
	std::cout << "The volume of the rectangular prism is: " << a * b * c;
}
