/*�����������С��*/
int main()
{
	int i,j;
	float max, min, num[5] = { 0 };

	printf("����������֣�\n");
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
	printf("�������%f",max);
	printf("��С����%f", min);
	return 0;
}