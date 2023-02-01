#include <iostream>
using namespace std;


/*核心思想
* 选择一个数作为有序序列
* 每一轮排序将后面一个数（有序）加入到序列
* 直到最后一个数
*/

//方法1
void insertion_sorting(int arr[],int n)
{
	//第一个元素开始，第0个元素本身是有序的
	for (int i = 1; i < n; i++)
	{
		//要比较的元素（待插入的数）
		int flag = arr[i];

		//j=要比较的前一个数
		int j = i - 1;

		//从当前位置前一个排序好的数开始向前比较
		while (j >= 0 && arr[j] > flag)
		{
			arr[j + 1] = arr[j];//大的数向后移动一个位置
				j--;
		}
		arr[j + 1] = flag;//,由于循环结束时有自减运算，所以j+1，将其放在正确位置
	}
}

int main()
{
	int arr[] = { 4,5,3,1,2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "排序前" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}

	insertion_sorting(arr, n);
	
	cout << endl << "排序后" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}