#include<iostream>
using namespace std;
int main()
{
	int array[5][5]{};
	int a, b;
	while (cin >> a && a != -1)
	{
		cin >> b;
		array[a + 1][b + 1] = 1 - array[a + 1][b + 1];
		array[a + 1 + 1][b + 1] = 1 - array[a + 2][b + 1];
		array[a - 1 + 1][b + 1] = 1 - array[a][b + 1];
		array[a + 1][b + 1 + 1] = 1 - array[a + 1][b + 2];
		array[a + 1][b] = 1 - array[a + 1][b];
	}
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}