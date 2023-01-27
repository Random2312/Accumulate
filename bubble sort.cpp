#include <iostream>
#include <windows.h>

using namespace std;

//冒泡排序
void bubble_shot(int *arr,int len)
{
	int temp,flag;
	//外层循环次数为总数-1
	for (int i = 0; i < 5 - 1; i++)
	{ 
		flag = 1;
		//每轮循环进行比较，比较完的不用再次比较
		for (int j = 0; j < 5 - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		//如果数据是有序的，跳出循环
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[5];
	//产生随机数
	for (int i = 0; i < 5; i++)
	{
		Sleep(1000);
		srand((unsigned int)time(NULL));
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << endl;
	}

	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_shot(arr, len);
	cout << "排序后：" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
