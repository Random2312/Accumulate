#include <iostream>
#include <windows.h>

using namespace std;

//�ж�1234��������ɶ��ٸ�������ͬ������
int main()
{
	int i, g, s, b, sum = 0;
	printf("��ɵ������У�\n");
	for (i = 0; i < 999; i++)
	{
		g = i % 10;
		s = i / 10 % 10;
		b = i / 100 % 10;
		if (g <= 4 && s <= 4 && b <= 4 && g > 0 && s > 0 && b > 0)
			if (g != s && g != b && s != b)
			{
				printf("%d\n", i);
				sum++;
			}
	}
	printf("������%d��\n", sum);

	system("pause");
	return 0;
}