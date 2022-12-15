#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;

	std::cin >> b;

	int* a = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = b - 1; i >= 0; --i)
	{
		std::cout << a[i] << " ";
	}

	delete[]a;

	return EXIT_SUCCESS;
}
