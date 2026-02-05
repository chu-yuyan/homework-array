#include<iostream>
using namespace std;
int main()
{
	int array[10] = { 15,15,15,15,15,15,15,15,15,15 };
	int car, port;
	while (cin >> car && car != -1)
	{
		cin >> port;
		int temp = 0;
		for (int i = 0; i < 10; i++)
		{
			if (array[i] == car)
			{
				cout << "该车已经停在" << i << "号车位了！";
				temp = 1;
				break;
			}
		}
		if (temp == 0 && array[port] != 15)
		{
			cout << array[port] << "号车已经占据该车位了！";
		}
		else if (temp == 0 && array[port] == 15)
		{
			cout << car << "号车成功停靠在" << port << "号车位！";
			array[port] = car;

		}
	}

	return 0;
}