#include <iostream>
#include <windows.h>
using namespace std;

//方法1 创建临时变量
int Strlen(char* p)
{
	int len = 0;
	while (*p++ != '\0')
	{
		len++;
	}
	return len;
}

//方法2 不创建临时变量
int Strlen2(char* p)
{
	if (*p != '\0')
		return 1 + Strlen2(++p);
	else
		return 0;
}

int main()
{
	char str[] = "\0";

	cout << "输入字符串" << endl;
	cin >> str;

	int len = Strlen(str);
	int len2 = Strlen2(str);

	cout << "method 1: 长度为" << len << endl;
	cout << "method 2: 长度为" << len2 << endl;

	system("pause");
	return 0;
}