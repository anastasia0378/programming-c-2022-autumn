#include<iostream>

int main(int arg, char* argv[])
{
	int x = 0;

	std::cin >> x;

	if (x % 4 == 0 || x == 1)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}
