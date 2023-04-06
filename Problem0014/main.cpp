#include <iostream>
#include <vector>
#include <algorithm>

struct Pair
{
	uint64_t startingNumber{};
	int size{};
};

constexpr uint64_t calculateNext(uint64_t current)
{
	return current & 0b1 ? 3 * current + 1 : current / 2;
}

int main()
{
	std::vector<Pair> sizes{};

	for (uint64_t i{ 999999 }; i != 0; i--)
	{
		uint64_t num{ i };
		sizes.push_back({ num, 0 });
		do sizes.back().size++;
		while ((num = calculateNext(num)) != 1);
	}

	std::sort(sizes.rbegin(), sizes.rend(), [](const Pair& A, const Pair& B) { return A.size < B.size; });
	std::cout << sizes[0].startingNumber << '\n';

	return 0;
}