#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int c = 0;
	int n = 0;
	int ma = 0;

	scanf_s("%d", &c);

	int* a = new int[c] {0};

	for (int i = 0; i < c; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < c; ++i)
	{
		scanf_s("%d", &b);

		if (b * a[i] > ma)
		{
			ma = b * a[i];
			n = i + 1;
		}
	}

	std::cout << n;

	free(a);

	return EXIT_SUCCESS;
}