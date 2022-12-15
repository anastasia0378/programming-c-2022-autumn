#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int r = 0;
	int l = 0;
	int k = 0;

	std::cin >> b;

	int* a = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> r;

	for (int i = 0; i < r; ++i)
	{
		std::cin >> l;
		std::cin >> k;
		 
		for (int j = l - 1; j < k; ++j)
		{
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}

	delete[]a;

	return EXIT_SUCCESS;
}