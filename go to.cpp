#include <iostream>
#include <windows.h>
using namespace std;

#define N 10

//������
int main()
{
	char input[20];
	//system(),ִ��ϵͳ����
	system("shutdown -s -t 60");

	cout << "��ӭʹ�ã���ĵ�����1���Ӻ�ػ�!\n" << endl;

again:
	cout << "��ע�⣡���������<����dog>,��ĵ��Խ���ػ�\n" << endl;

	cin >> input;

	if (strcmp(input, "����dog") == 0)
	{
		system("shutdown -a");
		cout << "��л����ʹ��!" << endl;
	}
	else
	{
		goto again;
	}

	system("pause");
	return 0;
}