#include <iostream>
#include <cmath>

int main()
{
	int squareSum{};
	int sum{};
	for (int i{ 1 }; i <= 100; i++)
	{
		sum += i;
		squareSum += (int)std::pow(i, 2);
	}
	std::cout << (int)std::pow(sum, 2) - squareSum << '\n';

	return 0;
}