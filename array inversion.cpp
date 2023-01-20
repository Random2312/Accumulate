#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int i = 0, j = 0, temp, start, end, arr[10];

	while (i < 10)
	{
		Sleep(1000);
		srand((unsigned int)time(NULL));
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << endl;
		i++;
	}
	start = 0;
	end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start <= end)
	{
		temp = arr[start];
		arr[start] = arr[end]; //首尾互换
		arr[end] = temp;

		/*首部向后移动一个元素，尾部向前移动一个元素*/
		start++;
		end--;
	}

	cout << "--------\n移动后的数组" << endl;
	while (j < 10)
	{
		cout << arr[j] << "   ";
		j++;
	}

	system("pause");
	return 0;
}

