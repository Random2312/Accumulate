#include <iostream>

using namespace std;

#define N 10

//�ҳ�ָ����Ԫ��
int main()
{
	int arr[N], right, left, mid, num;
	//��ֵ
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << "  ";
	}

	cout << endl << "����Ҫ���ҵ�Ԫ��" << endl;
	cin >> num;

	left = 0;//��һ��Ԫ���±�
	right = sizeof(arr) / sizeof(arr[0]) - 1;//���һ��Ԫ���±�

	//ѭ���жϣ����м�û��Ԫ��ʱ����ѭ��
	while (left <= right)
	{
		//�м�Ԫ���±�(����ѭ����ʹ��ÿ���ж�ǰ����)
		mid = (left + right) / 2;

		if (num < arr[mid])
		{
			right = mid - 1;//���±�-1
		}
		else if (num > arr[mid])
		{
			left = mid + 1;//���±�+1
		}
		else
		{
			cout << "��Ԫ���±�Ϊ" << mid << endl;
			break;
		}
	}

	if (left > right)
	{
		cout << "Ԫ�ز�����!" << endl;
	}

	system("pause");
	return 0;
}