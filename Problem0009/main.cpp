#include <iostream>

int main()
{
	int a{ 1 };
	int b{ 2 };
	int c{ 3 };
	bool found{};
	while (!found)
	{
		b = 1;
		while (b < c)
		{
			a = 1;
			while (a < b)
			{
				if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2))
					if (a + b + c == 1000)
						found = true;
				if (found)
					break;
				a++;
			}
			if (found)
				break;
			b++;
		}
		if (found)
			break;
		c++;
	}
	std::cout << a * b * c << '\n';

	return 0;
}