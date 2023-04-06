#include <iostream>
#include <cmath>

bool isPrime(int n)
{
	for (int i{ 2 }; i <= std::sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	long long totalSum{};
	for (int i{ 2 }; i != 2000000; i++)
		if (isPrime(i))
			totalSum += i;
	std::cout << totalSum << '\n';

	return 0;
}