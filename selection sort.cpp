#include <iostream>
using namespace std;

/*����˼��
��δ�����������ҵ����С��Ԫ�أ������������е���ʼλ�ã�
�ٴ�δ����Ԫ���м���Ѱ�����С��Ԫ�أ��������������е�ĩβ����������
��������ʾ��С��������
*/
int main()
{
	int arr[10];
	int min;
	srand((unsigned int)time(0));
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	cout << endl << "�����:" << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//�ٶ���СֵΪ��һ��Ԫ�أ��±꣩
		min = i;

		//ֻ����i�±�����Ԫ�غ�i�Ƚϣ�ÿ�ֽ�����min=��СԪ�ص��±�
		for (int j = i+1; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[j] < arr[min])//�б������С��
			{
				min = j;//���±�ŵ�min
			}
		}

		swap(arr[i], arr[min]);//����Ԫ��

		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}