#include <iostream>
#include <windows.h>
using namespace std;

//�ݹ��ӡÿһλ����
void print(int a)
{
	//�������9˵������λ�����ϵ�����
	if (a > 9)
	{
		print(a/10);//ͨ���ݹ�ȡ����λ�ϵ���
	}
	printf("%d  ", a % 10);//ÿ�ν�ȡ���ĸ�λ����ӡ����
}

int main()
{
	int num;
	cout << "���룺" << endl;
	cin >> num;

	print(num);

	system("pause");
	return 0;
}