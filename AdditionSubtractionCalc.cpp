#include <iostream>

int main()
{
	std::cout << "Enter two numbers to add and subtract \n";
	int one{};
	int two{};
	std::cin >> one;
	std::cin >> two;
	std::cout << one << "+" << two << "=" << one + two << '\n';
	std::cout << one << "-" << two << "=" << one - two << '\n';
	return 0;
}