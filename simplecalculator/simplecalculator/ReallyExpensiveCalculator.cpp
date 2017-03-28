#include <iostream>
#include <string>


int main()
{
	int aFirst, bSecond, cAdd, dSubtract, eDivide, fMultiply, gRemainder;
	 

	std:: string nameString;

	std::cout << "What is your Name:";
	std::cin >> nameString;

	std::cout << "Enter a number: ";
    std::cin >> aFirst;
	
	std::cout << "Enter a second number";
	std::cin >> bSecond;

	cAdd = aFirst + bSecond;
	dSubtract = aFirst - bSecond;
	eDivide = aFirst / bSecond;
	fMultiply = aFirst * bSecond;
	gRemainder = aFirst % bSecond;

	std::cout << "The sum of" << aFirst << "+" << bSecond << "=" << cAdd << std::endl;
	std::cout << "The sum of" << aFirst << "-" << bSecond << "=" << cAdd << std::endl;
	std::cout << "The sum of" << aFirst << "/" << bSecond << "=" << cAdd << std::endl;
	std::cout << "The sum of" << aFirst << "*" << bSecond << "=" << cAdd << std::endl;
	std::cout << "The sum of" << aFirst << "%" << bSecond << "=" << cAdd << std::endl;
	std::cout << "The End" << nameString << std::endl;
	

}