#include <stdio.h>
#include <stdlib.h>

int main()
{

	int val;
	int num = rand() % 100 + 1;//����1-100�����
	printf("����������%d\n\n",num);
	//cout << "�����" << num << endl;
	do 
	{
		printf("����������������֣�\n");
		scanf("%d",&val);
		//cout << "����������"<< endl;
		//cin >> val;
		if (val > num)	printf("�������ֱȽϴ�\n"); //cout << "�������ִ�" << endl;
		else if (val < num)	 printf("�������ֱȽ�С\n");//cout << "��������С" << endl;
		else printf("��ȷ\n");	//cout << "��ȷ" << endl;
	} while (val != num);

	return 0;
}
