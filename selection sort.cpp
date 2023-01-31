#include <iostream>
using namespace std;

/*基本思想
在未排序序列中找到最大（小）元素，放在排序序列的起始位置，
再从未排序元素中继续寻找最大（小）元素，放在已排序序列的末尾，依次类推
本程序演示由小到大排序
*/
int main()
{
	int arr[10];
	int min;
	srand((unsigned int)time(0));
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	cout << endl << "排序后:" << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//假定最小值为第一个元素（下标）
		min = i;

		//只查找i下标后面的元素和i比较，每轮结束后，min=最小元素的下标
		for (int j = i+1; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[j] < arr[min])//有比这个数小的
			{
				min = j;//将下标放到min
			}
		}

		swap(arr[i], arr[min]);//交换元素

		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}