#include<iostream>

int main(int argc, char* argv[])
{
	int ma = 0;
	int b = 0;

	scanf_s("%d", &b);

	int* a = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < b + 2; ++i)
	{
		if ((a[i % b] + a[(i + 1) % b] + a[(i + 2) % b]) > ma)
		{
			ma = a[i % b] + a[(i + 1) % b] + a[(i + 2) % b];
		}
	}

	std::cout << ma;

	free(a);

	return EXIT_SUCCESS;
}