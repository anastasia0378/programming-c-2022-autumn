#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int h = 0;

	std::cin >> b;

	int* a = new int[b + 1] {0};

	for (int i = 0; i < b; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> h;

	for (int i = 0; i < b + 1; ++i)
	{
		if (h > a[i])
		{
			std::cout << ++i;
			break;
		}
	}

	delete[]a;

	return EXIT_SUCCESS;
}