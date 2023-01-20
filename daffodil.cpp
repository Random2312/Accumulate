#include <iostream>
#include <windows.h>

using namespace std;

//do while 求水仙花数
int main()
{
	int num = 100, g, s, b;

	cout << "所有三位水仙花数:" << endl;
	do
	{
		g = num % 10;
		s = num / 10 % 10;
		b = num / 100 % 10;

		if (g * g * g + s * s * s + b * b * b == num)
			cout << num << endl;;

		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}

