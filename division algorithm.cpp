#include <iostream>

using namespace std;

int main()
{
	int a, b, t;

	cout << "输入两个数:" << endl;
	cin >> a >> b;

	//辗转相除法
	while (a % b)
	{
		t = a % b;
		a = b;
		b = t;
	}

	cout << "最大公约数" << b << endl;


	system("pause");
}