#include<iostream>
using namespace std;
int main()
{
	int array1[8][8]{};
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			int a;
			cin >> a;
			array1[i][j] = a;
		}
	}

	int array2[4][4]{};
	int max = 0;
	int x, y;
	for (int i = 0; i < 8; i += 2)
	{
		for (int j = 0; j < 8; j += 2)
		{
			max = array1[i][j];
			for (x = i; x < (i + 2); x++)
			{
				for (y = j; y < (j + 2); y++)
				{
					if (array1[x][y] > max)
					{
						max = array1[x][y];
					}
				}
			}
			array2[i / 2][j / 2] = max;
		}
	}
	cout << "进行2*2最大池化后的结果为：" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}