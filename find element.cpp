#include <iostream>
#include <windows.h>

using namespace std;


//找出只出现一次的元素
int main()
{
	int arr[] = { 1,2,3,4,5,6,9,5,4,3,2,1 };

	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		int count = 0;
		for (int j = 0; j < len; j++)
		{
			//如果有相同的将计数器+1
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//整个循环下来，count=1的元素就表示只出现了一次
		if (count == 1)
		{
			cout << arr[i] << "只出现一次" << endl;
		}
	}

	system("pause");
	return 0;
}