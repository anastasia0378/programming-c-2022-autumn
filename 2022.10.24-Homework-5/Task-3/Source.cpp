#include<iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int ma = 0;
	int mi = 1000;
	int b = 0;

	scanf_s("%d", &k);

	int* a = new int[k] {0};

	for (int i = 0; i < k; ++i)
	{
		scanf_s("%d", &a[i]);
		ma = (ma < a[i] ? a[i] : ma);
		mi = (mi > a[i] ? a[i] : mi);
	}

	for (int i = 0; i < k; ++i)
	{
		b = (a[i] == ma ? mi : a[i]);
		std::cout << b << " ";
	}

	free(a);

	return EXIT_SUCCESS;
}