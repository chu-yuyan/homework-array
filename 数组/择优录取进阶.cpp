#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;
int main() {
	double array[10]{};
	double s = 0, avg = 0;
	int n = 0;
	double a;
	while (cin >> a && a != -1)
	{
		if (0 == n && a >= 3.50)
		{
			array[n] = a;
			n++;
			s = (s + a);

		}
		else if (n > 0 && n < 10 && a > s / n)
		{
			array[n] = a;
			n++;
			s = (s + a);

		}

		else if (n == 10)
		{
			double min = array[0];
			int m = 0;
			for (int i = 1; i < 10; i++)
			{
				if (array[i] < min)
				{
					min = array[i];
					m = i;
				}
			}
			if (a > (s / n) && a > min)
			{
				array[m] = a;
				s = s - min + a;

			}

		}

	}
	cout << "最终被录用绩点情况：" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] < array[j + 1])
			{
				double temp;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		if (array[i] != 0)
		{
			cout << fixed << setprecision(2) << array[i] << " ";

		}

	}
	cout << endl;

	cout << "平均绩点：";
	if (n != 0)
	{
		cout << endl << fixed << setprecision(2) << (s / n);
	}
	else
		cout << "0.00";


	return 0;

}