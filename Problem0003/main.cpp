#include <iostream>

int getFactor(long long n)
{
	for (int i{ 2 }; i != n; i++)
		if (n % i == 0)
			return i;
	return 0;
}

int main()
{
	long long num{ 600851475143 };

	while (true)
	{
		int factor{ getFactor(num) };
		if (factor == 0)
			break;
		else
			num /= factor;
	}
	std::cout << num << '\n';

	return 0;
}