#include<iostream>

int main(int argc, char* argv[])
{
	int a = 1;
	int b = 0;

	while (a != 0)
	{
		std::cin >> a;
		if (a % 2 == -1)
		{
			++b;
		}
	}

	std::cout << b;

	return EXIT_SUCCESS;
}