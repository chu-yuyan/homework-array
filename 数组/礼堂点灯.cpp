#include<iostream>
using namespace std;
int main()
{
	int opt;
	int array[100]{};
	while (cin >> opt && opt != -1) {
		if (1 == opt)
		{
			for (int i = 0; i < 100; i++)
			{
				int prime = 1;
				if (i < 2)
					continue;
				else if (2 == i)
					array[i] += 1;
				else if (i % 2 == 0)
					continue;
				else
				{
					for (int j = 3; j * j <= i; j += 2)
					{
						if (0 == i % j)
						{
							prime = 0;
							break;
						}

					}
					if (1 == prime)
					{
						array[i] += 1;
					}
				}
			}
		}
		if (opt == 2)
		{
			for (int i = 0; i < 100; i++)
			{
				int prime = 1;
				if (i < 2)
					continue;
				else if (2 == i)
					continue;
				else if (i % 2 == 0)
					array[i] += 1;
				else
				{
					for (int j = 3; j * j <= i; j += 2)
					{
						if (0 == i % j)
						{
							prime = 0;
							array[i] += 1;
							break;
						}

					}
					if (1 == prime)
					{
						continue;
					}
				}
			}
		}
		if (opt == 3)
		{
			for (int i = 0; i < 100; i++)
			{
				if (i % 2 == 1)
				{
					array[i] += 1;
				}
			}
		}
		if (opt == 4)
		{
			for (int i = 0; i < 100; i++)
			{
				if (i % 2 == 0)
				{
					array[i] += 1;
				}
			}
		}
	}
	cout << "Ï¨Ãð£º";
	for (int i = 0; i < 100; i++)
	{
		if (array[i] % 3 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl << "³¤ÁÁ£º";
	for (int i = 0; i < 100; i++)
	{
		if (array[i] % 3 == 1)
		{
			cout << i << " ";
		}
	}
	cout << endl << "ÉÁË¸£º";
	for (int i = 0; i < 100; i++)
	{
		if (array[i] % 3 == 2)
		{
			cout << i << " ";
		}
	}

	return 0;
}