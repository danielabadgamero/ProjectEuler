#include <iostream>

int main()
{
	int prevI{ 1 };
	int i{ 2 };
	int totalSum{};
	while (i < 4000000)
	{
		if (i % 2 == 0)
			totalSum += i;
		int temp{ prevI };
		prevI = i;
		i += temp;
	}
	std::cout << totalSum << '\n';

	return 0;
}