#include <iostream>

using namespace std;

//打印乘法表
int main()
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			//使用%-2d左对齐让乘法表更美观
			printf("%d*%d=%-2d  ", j, i, j * i);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}