#include <iostream>
#include <windows.h>

using namespace std;

#define N 10

int main()
{
	int i = 0, j = 0, temp, start, end, arr[N];

	while (i < N)
	{
		Sleep(1000);
		srand((unsigned int)time(NULL));
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << endl;
		i++;
	}

	start = 0;
	end = sizeof(arr) / sizeof(arr[0]) - 1;//����β���±�=�������鳤��/����Ԫ���ֽڳ���-1

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
	while (j < N)
	{
		cout << arr[j] << "   ";
		j++;
	}

	system("pause");
	return 0;
}