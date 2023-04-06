#include <iostream>

const long long makeTriangle(long long n)
{
	return ((1 + n) * n) / 2;
}

bool getDivisors(long long n)
{
	long long numDivisors{ 2 };
	if (n == 1)
		numDivisors--;
	for (long long i{ 2 }; i <= static_cast<int>(sqrt(n)); i++)
		if (n % i == 0)
			numDivisors += 2;
	return numDivisors > 500;
}

int main()
{
	bool found{ false };
	long long i{};
	while (!found)
	{
		i++;
		found = getDivisors(makeTriangle(i));
	}
	std::cout << makeTriangle(i) << '\n';

	return 0;
}