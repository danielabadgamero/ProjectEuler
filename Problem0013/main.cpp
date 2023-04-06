#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> nums{};

int main()
{
	std::ifstream input{ "input.txt" };
	while (!input.eof())
	{
		std::string buf(50, 0);
		input.read(buf.data(), 50);
		nums.push_back(buf);
		input.get();
	}

	std::vector<int> bases{};
	int carry{};
	for (int i{}; i != 50; i++)
	{
		bases.push_back(0);
		for (std::string& num : nums)
			bases.back() += num[49 - i] - '0';
		bases.back() += carry;
		carry = bases.back() / 10;
		bases.back() %= 10;
	}
	std::string carryDigits{ std::to_string(carry) };
	for (std::string::reverse_iterator c{ carryDigits.rbegin() }; c != carryDigits.rend(); c++)
		bases.push_back(*c - '0');

	int digit{};
	for (std::vector<int>::reverse_iterator d{ bases.rbegin() }; d != bases.rend(); d++)
	{
		if (digit == 10)
			break;
		std::cout << *d;
		digit++;
	}

	return 0;
}