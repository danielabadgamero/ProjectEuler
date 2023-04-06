#include <iostream>

int main()
{
	int num{ 0 };
	while (true)
	{
		num++;
		bool valid{ true };
		for (int i{ 2 }; i <= 20; i++)
			if (num % i != 0)
				valid = false;
		if (!valid) continue;
		std::cout << num << '\n';
		break;
	}

	return 0;
}