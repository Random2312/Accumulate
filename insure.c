/*���Ľ���
  �������ݴ�������
  ������Ϣ�ĳɺ���*/
#include <stdio.h>

int main()
{
	int civilState,gender,age,temp;//temp��������getchar�����ľ���

	printf("Ͷ��������\n˾���ѻ�\n30������δ������\n25������δ��Ů��\n----------------------\n");

	printf("\n\t��ϸ��Ϣ��\n");
	printf("\n\t�������(y/n)\n");
	civilState = getchar();
	temp=getchar();

	printf("\t�Ա�(m/f)\n");
	gender = getchar();
	temp=getchar();

	printf("\t����\n");
	scanf("%d",&age);
	temp=getchar();

	printf("--------------------------------\n");
	printf("���������:����%c   �Ա�%c   ����%d\n",civilState,gender,age);
	printf("Ͷ�����\n");
	if (civilState == 'y' || civilState == 'Y')
	{
		printf("Ͷ��\n");
	}
	else if (age > 30 && (civilState == 'n' || civilState == 'N') && (gender == 'm' || gender == 'M'))
	{
		printf("Ͷ��\n");
	}
	else if (age > 25 && (civilState == 'n' || civilState == 'N') && (gender == 'f' || gender == 'M'))
	{
		printf("Ͷ��\n");
	}
	else
	{
		printf("δͶ��");
	}
	return 0;
}