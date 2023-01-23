#include <iostream>

using namespace std;

#define N 10

//找出指定的元素
int main()
{
	int arr[N], right, left, mid, num;
	//赋值
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << "  ";
	}

	cout << endl << "输入要查找的元素" << endl;
	cin >> num;

	left = 0;//第一个元素下标
	right = sizeof(arr) / sizeof(arr[0]) - 1;//最后一个元素下标

	//循环判断，当中间没有元素时跳出循环
	while (left <= right)
	{
		//中间元素下标(放在循环中使得每次判断前更新)
		mid = (left + right) / 2;

		if (num < arr[mid])
		{
			right = mid - 1;//右下标-1
		}
		else if (num > arr[mid])
		{
			left = mid + 1;//左下标+1
		}
		else
		{
			cout << "该元素下标为" << mid << endl;
			break;
		}
	}

	if (left > right)
	{
		cout << "元素不存在!" << endl;
	}

	system("pause");
	return 0;
}