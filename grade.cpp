#include <iostream>
#include <windows.h>

using namespace std;

//����ѧ���ɼ�����ӡ������ƽ����
int main()
{
	int grade[3][3], i, j;
	float ave[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("�����%d��ѧ������\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &grade[i][j]);
		}
	}
	printf("ѧ���ɼ�Ϊ\n");
	printf("���\tѧ��1\tѧ��2\tѧ��3\tƽ����\n");
	for (i = 0; i < 3; i++)
	{
		ave[i] = 0;
		printf("%d", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%9d", grade[i][j]);
			ave[i] += grade[i][j];//����ƽ����
		}
		ave[i] /= 3;//����ƽ����
		printf("%9.2f", ave[i]);
		printf("\n\n");
	
	}
	system("pause");
}