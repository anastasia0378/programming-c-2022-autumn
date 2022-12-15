#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int mi = 100;
	int ma = -100;
	int su = 0;
	int pro = 1;
	int tru = 2;

	scanf_s("%d", &b);

	int* a = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		scanf_s("%d", &a[i]);

		ma = (ma > a[i] ? ma : a[i]);
		mi = (mi < a[i] ? mi : a[i]);
		su = (a[i] > 0 ? su + a[i] : su);
	}

	for (int i = 0; i < b && tru; ++i)
	{
		pro = (tru == 1 ? pro * a[i] : pro);
		tru = ((a[i] == ma || a[i] == mi) ? --tru : tru);
		pro = (tru == 0 ? pro / a[i] : pro);
	}

	std::cout << su << " " << pro;

	delete[]a;

	return EXIT_SUCCESS;
}