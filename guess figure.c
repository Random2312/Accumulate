#include <stdio.h>
#include <stdlib.h>

int main()
{

	int val;
	int num = rand() % 100 + 1;//生成1-100随机数
	printf("产生的数字%d\n\n",num);
	//cout << "随机数" << num << endl;
	do 
	{
		printf("输入你想输入的数字：\n");
		scanf("%d",&val);
		//cout << "请输入数字"<< endl;
		//cin >> val;
		if (val > num)	printf("输入数字比较大\n"); //cout << "输入数字大" << endl;
		else if (val < num)	 printf("输入数字比较小\n");//cout << "输入数字小" << endl;
		else printf("正确\n");	//cout << "正确" << endl;
	} while (val != num);

	return 0;
}
