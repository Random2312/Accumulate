#include <iostream>
#include <windows.h>
using namespace std;

//��n��쳲�������
int fib(int n)
{
	int a = 1, b = 1, c = 1;

	//ǰ����쳲�������Ϊ1
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
	cout << "����һ����" << endl;
	cin >> num;

	cout << "��" << num << "��쳲���������" << fib(num) << endl;

	system("pause");
	return 0;
}