#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int array[9][9]{};
	int a, b, c;
	while (cin >> a && a != -1)
	{
		cin >> b >> c;
		array[a][b] = 10;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				for (int k = (c - 1); k > 0; k--)
				{
					if ((abs(i - a) + abs(j - b)) == (c - k) && (array[i][j] < k))
					{
						array[i][j] = k;
					}
				}

			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (array[i][j] == 10)
			{
				cout << "* ";
			}
			else
			{
				cout << array[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}