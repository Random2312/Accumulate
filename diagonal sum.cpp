#include <iostream>

using namespace std;

int main()
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 }, i, j, x = 0, y = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
			if (j == i)
				x += a[i][j];
			if (j + i == 3 - 1)
				y += a[i][j];
		}
		printf("\n");
	}
	printf("\n\nx=%d\ny=%d\n", x, y);

	system("pause");
	return 0;
}