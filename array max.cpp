#include <iostream>
#include <windows.h>

using namespace std;

//��������Ԫ���������
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

	cout << "�����" << max << endl;
	system("pause");
	return 0;
}
