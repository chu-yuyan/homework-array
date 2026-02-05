#include<iostream>
using namespace std;
int main()
{
	int array1[3][3]{};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int a;
			cin >> a;
			array1[i][j] = a;
		}
	}
	int array2[5][5]{};
	for (int i = 0; i < 5; i += 2)
	{
		for (int j = 0; j < 5; j += 2)
		{
			array2[i][j] = array1[i / 2][j / 2];
		}
	}
	for (int i = 1; i < 5; i += 2)
	{
		for (int j = 1; j < 5; j += 2)
		{
			array2[i][j] = (array1[(i - 1) / 2][(j - 1) / 2] + array1[(i + 1) / 2][(j - 1) / 2] + array1[(i - 1) / 2][(j + 1) / 2] + array1[(i + 1) / 2][(j + 1) / 2]) / 4;
		}
	}
	for (int i = 0; i < 5; i += 2)
	{
		for (int j = 1; j < 5; j += 2)
		{
			array2[i][j] = (array1[i / 2][(j - 1) / 2] + array1[i / 2][(j + 1) / 2]) / 2;
		}
	}
	for (int j = 0; j < 5; j += 2)
	{
		for (int i = 1; i < 5; i += 2)
		{
			array2[i][j] = (array1[(i - 1) / 2][j / 2] + array1[(i + 1) / 2][j / 2]) / 2;
		}
	}
	cout << "进行简单插值后的结果为：" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}