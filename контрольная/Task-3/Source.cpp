#include<iostream>

std::string pri(int k, int i)
{
	if (i * i > k)
	{
		return "prime";
	}

	else if (k % i == 0)
	{
		return "composite";
	}

	return pri(k, ++i);
}

int main(int argc, char* argv[])
{
	int e = 0;

	std::cin >> e;

	std::cout << pri(e, 2);

	return EXIT_SUCCESS;
}