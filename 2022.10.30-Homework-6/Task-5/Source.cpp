#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);

		l = (a[i] < a[l] ? i : l);
	}

	for (int i = l; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	for (int i = 0; i < l; i++)
	{
		std::cout << a[i] << " ";
	}

	delete[]a;

	return EXIT_SUCCESS;
}