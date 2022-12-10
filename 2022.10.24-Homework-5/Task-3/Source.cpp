#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int mi = 1000;
	int ma = 0;
	int t = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
		mi = (mi > a[i] ? a[i] : mi);
		ma = (ma < a[i] ? a[i] : ma);
	}

	for (int i = 0; i < n; ++i)
	{
		t = (a[i] == ma ? mi : a[i]);
		std::cout << t << " ";
	}

	free(a);

	return EXIT_SUCCESS;
}