#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	long l = 10000000;
	int n = 0;
	int ma = 0;

	scanf_s("%d", &b);

	int* a = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	std::cin >> n;

	for (int i = 0; i < b; ++i)
	{

		if ((a[i] - n) * (a[i] - n) == l)
		{
			ma = (ma > a[i] ? a[i] : ma);
		}

		else if ((a[i] - n) * (a[i] - n) < l)
		{
			ma = a[i];
			l = (a[i] - n) * (a[i] - n);
		}
	}

	std::cout << ma;

	free(a);

	return EXIT_SUCCESS;
}