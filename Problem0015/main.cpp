#include <iostream>
#include <vector>

struct Pos
{
	int x{};
	int y{};
} pos{};

std::vector<std::vector<bool>> explored{};
std::vector<Pos> history{};

int main()
{
	explored.resize(20);
	for (std::vector<bool>& row : explored)
		row.resize(20);

	int paths{};
	do
	{
		if (pos.x < 19 && !explored[pos.x + 1][pos.y])
		{
			if (pos.x != 19 || pos.y != 19)
				history.push_back(pos);
			explored[pos.x][pos.y] = true;
			pos.x++;
		}
		else if (pos.y < 19 && !explored[pos.x][pos.y + 1])
		{
			if (pos.x != 19 || pos.y != 19)
				history.push_back(pos);
			explored[pos.x][pos.y] = true;
			pos.y++;
		}
		else
		{
			if (pos.x == 19 && pos.y == 19)
				paths++;
			pos = history.back();
			history.pop_back();
		}
	} while (pos.x != 0 || pos.y != 0);

	std::cout << paths << '\n';

	return 0;
}