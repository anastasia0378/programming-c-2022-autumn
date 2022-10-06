#include<iostream>

int main(int arg, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;

	std::cin >> M >> N >> x >> y;

	if (x > 1)
	{
		std::cout << x - 1 << " " << y << std::endl;
	}
	if (x < M)
	{
		std::cout << x + 1 << " " << y << std::endl;
	}
	if (y > 1)
	{
		std::cout << x << " " << y - 1 << std::endl;
	}
	if (y < N)
	{
		std::cout << x << " " << y + 1 << std::endl;
	}

	{
		std::cout << "";
	}

	return EXIT_SUCCESS;
}