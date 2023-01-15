/*求最大数和最小数*/
int main()
{
	int i,j;
	float max, min, num[5] = { 0 };

	printf("输入五个数字：\n");
	for(i=0;i<5;i++)
		scanf("%f",&num[i]);

	max = min = num[0];

	for(j=0;j<5;j++)
		if (num[j] > max)
		{
			max = num[j];
		}
		else if (num[j] < min)
		{
			min = num[j];
		}
	printf("最大数是%f",max);
	printf("最小数是%f", min);
	return 0;
}