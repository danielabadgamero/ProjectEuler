#include <iostream>

int main()
{
	int totalSum{};
	for (int i{ 1 }; i != 1000; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			totalSum += i;
	std::cout << totalSum << '\n';

	return 0;
}