#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int l = 0;
	int r = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> m;

	for (int i = 0; i < m; ++i)
	{
		std::cin >> l;
		std::cin >> r;

		for (int j = l - 1; j < r; ++j)
		{
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}

	delete[]a;

	return EXIT_SUCCESS;
}