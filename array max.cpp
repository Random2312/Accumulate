#include <iostream>

using namespace std;

#define N 10

//���������Ԫ��
int main()
{
	int arr[N], max,len;
	//�����鸳ֵ
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "  ";
	}
	//���ֵ�ٶ�Ϊ��һ��Ԫ��
	max = arr[0];

	//�������鳤�ȣ��ⲽ����ʡ��
	len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	cout <<endl<< "���Ԫ��" << max << endl;

	system("pause");
	return 0;
}