#include <iostream>

using namespace std;

//��ӡ�˷���
int main()
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			//ʹ��%-2d������ó˷��������
			printf("%d*%d=%-2d  ", j, i, j * i);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}