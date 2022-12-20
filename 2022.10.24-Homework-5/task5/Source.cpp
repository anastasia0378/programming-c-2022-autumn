#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = 0;
	long len = 10000000;
	int num = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> num;

	for (int i = 0; i < n; ++i)
	{

		if ((a[i] - num) * (a[i] - num) == len)
		{
			ma = (ma > a[i] ? a[i] : ma);
		}

		else if ((a[i] - num) * (a[i] - num) < len)
		{
			ma = a[i];
			len = (a[i] - num) * (a[i] - num);
		}
	}

	std::cout << ma;

	free(a);

	return EXIT_SUCCESS;
}