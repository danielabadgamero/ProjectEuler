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
	int i{};
	int n{ 1 };
	while (i != 10001)
	{
		n++;
		if (isPrime(n))
			i++;
	}
	std::cout << n << '\n';

	return 0;
}