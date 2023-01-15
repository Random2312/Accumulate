/*待改进：
  输入数据错误的情况
  输入信息改成汉字*/
#include <stdio.h>

int main()
{
	int civilState,gender,age,temp;//temp用来消除getchar带来的警告

	printf("投保条件：\n司机已婚\n30岁以上未婚男性\n25岁以上未婚女性\n----------------------\n");

	printf("\n\t详细信息：\n");
	printf("\n\t婚姻情况(y/n)\n");
	civilState = getchar();
	temp=getchar();

	printf("\t性别(m/f)\n");
	gender = getchar();
	temp=getchar();

	printf("\t年龄\n");
	scanf("%d",&age);
	temp=getchar();

	printf("--------------------------------\n");
	printf("输入的数据:婚姻%c   性别%c   年龄%d\n",civilState,gender,age);
	printf("投保情况\n");
	if (civilState == 'y' || civilState == 'Y')
	{
		printf("投保\n");
	}
	else if (age > 30 && (civilState == 'n' || civilState == 'N') && (gender == 'm' || gender == 'M'))
	{
		printf("投保\n");
	}
	else if (age > 25 && (civilState == 'n' || civilState == 'N') && (gender == 'f' || gender == 'M'))
	{
		printf("投保\n");
	}
	else
	{
		printf("未投保");
	}
	return 0;
}