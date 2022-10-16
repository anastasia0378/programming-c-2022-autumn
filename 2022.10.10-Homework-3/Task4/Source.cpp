#include<iostream>

int main(int argc, char* argv[])
{
	int y = 0;
	int a = 1;
	int b = 0;
	int c = 0;

	std::cin >> y;

	do
	{
		b = 0;
		c = a - y;

		do
		{
			if (c >= 0)
			{
				std::cout << y - c << " ";
			}
			else
			{
				std::cout << y + c << " ";
			}
			++b;
			++c;
		} while (b < y);

		std::cout << std::endl;
		++a;

	} while (a <= y);

	return EXIT_SUCCESS;
}