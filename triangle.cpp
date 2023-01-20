#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
#define N 5 
	int i, j, num[N][N];
	for (i = 0; i < N; i++)
	{
		num[i][i] = 1;
		num[i][0] = 1;
	}
	for (i = 2; i < N; i++)
		for (j = 1; j < i; j++)
			num[i][j] = num[i - 1][j] + num[i - 1][j - 1];
	/*Èý½ÇÐÎ*/
	for (i = 0; i < N; i++)
	{

		for (j = 0; j <= i; j++)
		{
			printf("%6d", num[i][j]);
		}
		printf("\n");
	}
	system("pause");
}