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
		arr[start] = arr[end]; //��β����
		arr[end] = temp;

		/*�ײ�����ƶ�һ��Ԫ�أ�β����ǰ�ƶ�һ��Ԫ��*/
		start++;
		end--;
	}

	cout << "--------\n�ƶ��������" << endl;
	while (j < 10)
	{
		cout << arr[j] << "   ";
		j++;
	}

	system("pause");
	return 0;
}

