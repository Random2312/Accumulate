#include <iostream>
#include <windows.h>
using namespace std;

//����1 ������ʱ����
int Strlen(char* p)
{
	int len = 0;
	while (*p++ != '\0')
	{
		len++;
	}
	return len;
}

//����2 ��������ʱ����
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

	cout << "�����ַ���" << endl;
	cin >> str;

	int len = Strlen(str);
	int len2 = Strlen2(str);

	cout << "method 1: ����Ϊ" << len << endl;
	cout << "method 2: ����Ϊ" << len2 << endl;

	system("pause");
	return 0;
}