#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int m = 0;

	std::cin >> b >> m;

	int** a = new int* [b];
	int* s = new int[b] {0};
	int* c = new int[m] {0};

	for (int i = 0; i < b; ++i)
	{
		a[i] = new int[m] {0};
	}

	for (int i = 0; i < b; ++i)
	{
		for (int k = 0; k < m; ++k)
		{
			std::cin >> a[i][k];

			s[i] += a[i][k];
			c[k] += a[i][k];
		}
	}

	for (int i = 0; i < b; ++i)
	{
		std::cout << s[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < m; ++i)
	{
		std::cout << c[i] << " ";
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < b; ++i)
	{
		for (int k = 0; k < m; ++k)
		{
			std::cout << a[i][k] << " ";
		}

		std::cout << std::endl;
	}

	delete[] a;
	delete[] s;
	delete[] c;

	return EXIT_SUCCESS;
}