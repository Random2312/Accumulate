#include <iostream>
#include <windows.h>

using namespace std;

//查找数组元素中最大数
int main()
{
	int i = 8, j = 0, arr[100], max = 0;

	while (j < i)
	{
		Sleep(1000);
		srand((unsigned int)time(NULL));
		arr[j] = rand() % 10;
		cout << arr[j] << endl;

		if (arr[j] > max)
			max = arr[j];
		j++;
	}

	cout << "最大数" << max << endl;
	system("pause");
	return 0;
}
