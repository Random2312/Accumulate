#include <iostream>
#include <windows.h>

using namespace std;

//ð������
void bubble_shot(int *arr,int len)
{
	int temp,flag;
	//���ѭ������Ϊ����-1
	for (int i = 0; i < 5 - 1; i++)
	{ 
		flag = 1;
		//ÿ��ѭ�����бȽϣ��Ƚ���Ĳ����ٴαȽ�
		for (int j = 0; j < 5 - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		//�������������ģ�����ѭ��
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[5];
	//���������
	for (int i = 0; i < 5; i++)
	{
		Sleep(1000);
		srand((unsigned int)time(NULL));
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << endl;
	}

	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_shot(arr, len);
	cout << "�����" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
