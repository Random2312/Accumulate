#include <iostream>
#include <windows.h>

using namespace std;

//输入学生成绩，打印并计算平均分
int main()
{
	int grade[3][3], i, j;
	float ave[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("输入第%d个学生分数\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &grade[i][j]);
		}
	}
	printf("学生成绩为\n");
	printf("序号\t学科1\t学科2\t学科3\t平均分\n");
	for (i = 0; i < 3; i++)
	{
		ave[i] = 0;
		printf("%d", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%9d", grade[i][j]);
			ave[i] += grade[i][j];//计算平均分
		}
		ave[i] /= 3;//计算平均分
		printf("%9.2f", ave[i]);
		printf("\n\n");
	
	}
	system("pause");
}