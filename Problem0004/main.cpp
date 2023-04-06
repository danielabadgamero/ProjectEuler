#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isPalindrome(int n)
{
	std::string num{ std::to_string(n) };
	for (int i{}; i != num.size() / 2; i++)
		if (num.at(i) != num.at(num.size() - 1 - i))
			return false;

	return true;
}

int main()
{
	std::vector<int> palindromes{};
	for (int i{ 999 }; i != 99; i--)
		for (int j{ 999 }; j != 99; j--)
			if (isPalindrome(i * j))
				palindromes.push_back(i * j);
	std::cout << *std::max_element(palindromes.begin(), palindromes.end()) << '\n';
	
	return 0;
}