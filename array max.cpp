#include <iostream>

using namespace std;

#define N 10

//求数组最大元素
int main()
{
	int arr[N], max,len;
	//给数组赋值
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "  ";
	}
	//最大值假定为第一个元素
	max = arr[0];

	//计算数组长度，这步可以省略
	len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	cout <<endl<< "最大元素" << max << endl;

	system("pause");
	return 0;
}