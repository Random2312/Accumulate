#include <iostream>
#include <windows.h>
using namespace std;

//递归打印每一位数字
void print(int a)
{
	//如果大于9说明是两位或以上的数字
	if (a > 9)
	{
		print(a/10);//通过递归取出个位上的数
	}
	printf("%d  ", a % 10);//每次将取出的个位数打印出来
}

int main()
{
	int num;
	cout << "输入：" << endl;
	cin >> num;

	print(num);

	system("pause");
	return 0;
}