#include<iostream>

int main(int argc, char* argv[])
{
	int c = 0;
	int b = 0;
	int d = 0;

	scanf_s("%d", &c);

	int* a = new int[c] {0};

	for (int i = 0; i < c; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &d);

	for (int i = 0; i < c; ++i)
	{
		b = (d == a[i] ? ++b : b);
	}

	std::cout << b;

	free(a);

	return EXIT_SUCCESS;
}