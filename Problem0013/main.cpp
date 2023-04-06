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

	int64_t carry{};
	for (int i{}; i != 50; i++)
	{
		int64_t sum{};
		for (char& c : nums[i])
			sum += c - '0';
		sum += carry;
		carry = sum / 10;
	}

	std::cout << carry << '\n';

	return 0;
}