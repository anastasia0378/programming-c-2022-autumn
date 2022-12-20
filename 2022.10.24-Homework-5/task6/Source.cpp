#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int n = 0;
	int ma = 0;
	int num = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> b;

		if (b * a[i] > ma)
		{
			num = i + 1;
			ma = b * a[i];
		}
	}

	std::cout << num;

	free(a);

	return EXIT_SUCCESS;
}