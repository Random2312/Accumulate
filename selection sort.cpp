#include <iostream>
#include <cstdio>//cstdio将stdio.h的内容用C++头文件的形式表示出来。
using namespace std;

#define MAX_ELEMENT_COUNT 1000

int n, d[MAX_ELEMENT_COUNT];

/*基本思想
在未排序序列中找到最大（小）元素，放在排序序列的起始位置，
再从未排序元素中继续寻找最大（小）元素，放在已排序序列的末尾，依次类推
本程序演示由小到大排序
方法1是抄的
*/

//选择排序方法1
void selection_sort() {
	for (int i = 0; i < n; i++) {
		int minv = d[i], minp = i;
		for (int j = i + 1; j < n; j++) {
			if (d[j] < minv) {
				minv = d[j];
				minp = j;
			}
		}
		int t = d[i];
		d[i] = minv;
		d[minp] = t;
	}
}

//方法2
void selection_sort_2()
{
	int arr[10];

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
		int	min = i;

		//只查找i下标后面的元素和i比较，每轮结束后，min=最小元素的下标
		for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[j] < arr[min])//有比这个数小的
			{
				min = j;//将下标放到min
			}
		}

		swap(arr[i], arr[min]);//交换元素

		cout << arr[i] << " ";
	}
}

int main() {
	/****************1******************/
	printf("\nmethod 1\n");
	cout << "输入元素个数和元素" << endl;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", d + i);
	}

	selection_sort();

	cout<< "排序后:" << endl;
	for (int i = 0; i < n; i++) {
		printf("%d ", d[i]);
	}

	printf("\n");
	/****************2******************/
	printf("\nmethod 2\n");
	selection_sort_2();


	system("pause");
	return 0;
}