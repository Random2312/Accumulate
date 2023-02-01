#include <iostream>
#include <cstdio>//cstdio��stdio.h��������C++ͷ�ļ�����ʽ��ʾ������
using namespace std;

#define MAX_ELEMENT_COUNT 1000

int n, d[MAX_ELEMENT_COUNT];

/*����˼��
��δ�����������ҵ����С��Ԫ�أ������������е���ʼλ�ã�
�ٴ�δ����Ԫ���м���Ѱ�����С��Ԫ�أ��������������е�ĩβ����������
��������ʾ��С��������
����1�ǳ���
*/

//ѡ�����򷽷�1
void selection_sort() {
	for (int i = 0; i < n; i++) {
		int minv = d[i], minp = i;
		for (int j = i + 1; j < n; j++) {
			if (d[j] < minv) {
				minv = d[j];
				minp = j;
			}
		}
		int t = d[i];
		d[i] = minv;
		d[minp] = t;
	}
}

//����2
void selection_sort_2()
{
	int arr[10];

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
		int	min = i;

		//ֻ����i�±�����Ԫ�غ�i�Ƚϣ�ÿ�ֽ�����min=��СԪ�ص��±�
		for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[j] < arr[min])//�б������С��
			{
				min = j;//���±�ŵ�min
			}
		}

		swap(arr[i], arr[min]);//����Ԫ��

		cout << arr[i] << " ";
	}
}

int main() {
	/****************1******************/
	printf("\nmethod 1\n");
	cout << "����Ԫ�ظ�����Ԫ��" << endl;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", d + i);
	}

	selection_sort();

	cout<< "�����:" << endl;
	for (int i = 0; i < n; i++) {
		printf("%d ", d[i]);
	}

	printf("\n");
	/****************2******************/
	printf("\nmethod 2\n");
	selection_sort_2();


	system("pause");
	return 0;
}