#include<iostream>

int main(int arg, char* argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;
	int w = 0;

	std::cin >> x >> y >> z >> w;

	if ((x == z) || (y == w) || (x - z == y - w) || (x - z + y - w == 0))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}