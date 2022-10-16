#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a;

	do
	{
		c = 1;
		do
		{
			std::cout << b + c << " ";
			++c;
		} while (c <= a);
		std::cout << std::endl;
		++b;
	} while (b < a);

	return EXIT_SUCCESS;
}