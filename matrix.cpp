
#include <iostream>

//��������Ԫ��
int main()
{
	int i, j, max = 0, row, list;
	int arr[3][4] = { 1,2,3,6,5,4,9,8,7,7,8,9 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
			if (max < arr[i][j])
			{
				max = arr[i][j];
				row = i + 1;
				list = j + 1;
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("�����%d\n�ڵ�%d��%d��", max, row, list);

	system("pause");
	return 0;
}