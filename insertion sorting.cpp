#include <iostream>
using namespace std;


/*����˼��
* ѡ��һ������Ϊ��������
* ÿһ�����򽫺���һ���������򣩼��뵽����
* ֱ�����һ����
*/

//����1
void insertion_sorting(int arr[],int n)
{
	//��һ��Ԫ�ؿ�ʼ����0��Ԫ�ر����������
	for (int i = 1; i < n; i++)
	{
		//Ҫ�Ƚϵ�Ԫ�أ������������
		int flag = arr[i];

		//j=Ҫ�Ƚϵ�ǰһ����
		int j = i - 1;

		//�ӵ�ǰλ��ǰһ������õ�����ʼ��ǰ�Ƚ�
		while (j >= 0 && arr[j] > flag)
		{
			arr[j + 1] = arr[j];//���������ƶ�һ��λ��
				j--;
		}
		arr[j + 1] = flag;//,����ѭ������ʱ���Լ����㣬����j+1�����������ȷλ��
	}
}

int main()
{
	int arr[] = { 4,5,3,1,2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "����ǰ" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}

	insertion_sorting(arr, n);
	
	cout << endl << "�����" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}