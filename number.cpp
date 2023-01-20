#include <iostream>
#include <windows.h>

using namespace std;

//判断1234数字能组成多少个互不相同的数字
int main()
{
	int i, g, s, b, sum = 0;
	printf("组成的数字有：\n");
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
	printf("数字有%d个\n", sum);

	system("pause");
	return 0;
}