#include <iostream>
#include <windows.h>
using namespace std;

//第n个斐波那契数
int fib(int n)
{
	int a = 1, b = 1, c = 1;

	//前两个斐波那契数为1
	while (n > 2)
	{
		c = a + b;//a=1,b=1,c=2,3,5,8,13
		a = b;//a=1,b=1,c=2,3,5,8,13
		b = c;//a=1,b=2,c=3,5,8,13
		n--;
	}

	return c;
}
int main()
{
	int num;
	cout << "输入一个数" << endl;
	cin >> num;

	cout << "第" << num << "个斐波那契数是" << fib(num) << endl;

	system("pause");
	return 0;
}