#include <iostream>
#include <windows.h>

using namespace std;


//�ҳ�ֻ����һ�ε�Ԫ��
int main()
{
	int arr[] = { 1,2,3,4,5,6,9,5,4,3,2,1 };

	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		int count = 0;
		for (int j = 0; j < len; j++)
		{
			//�������ͬ�Ľ�������+1
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//����ѭ��������count=1��Ԫ�ؾͱ�ʾֻ������һ��
		if (count == 1)
		{
			cout << arr[i] << "ֻ����һ��" << endl;
		}
	}

	system("pause");
	return 0;
}