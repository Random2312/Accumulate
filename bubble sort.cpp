#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int temp, i, j, arr[5];
	//产生随机数
	for (i = 0; i < 5; i++)
	{
		Sleep(1000);
		srand((unsigned int)time(NULL));
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << endl;
	}

	//外层循环次数为总数-1
	for (i = 0; i < 5 - 1; i++)
		for (j = 0; j < 5 - i - 1; j++)//每轮循环进行比较，比较完的不用再次比较
			if (arr[j] > arr[j + 1])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	i = 0;
	while (i < 5)
	{
		cout << "排序后：" << arr[i] << endl;
		i++;
	}
	system("pause");
	return 0;
}
