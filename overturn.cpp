#include <iostream>
#include <windows.h>

using namespace std;

void overTurn(int array[],int n);

int main()
{
	int in,arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "��תǰ��" << endl;
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "   ";
	cout << endl;

	cout << "���뷭ת�����ָ�����" << endl;
	cin >> in;
	overTurn(arr,in);
	system("pause");
}

/******************��array��n�����ַ�ת*******************/
void overTurn(int array[], int n)
{
	int i, temp;
	printf("��תǰ\n");
	for (i = 0; i < n; i++)
		printf("%d   ", array[i]);

	for (i = 0; i < n / 2; i++)
	{
		temp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = temp;
	}

	printf("\n��ת��\n");
	for (i = 0; i < n; i++)
		printf("%d   ", array[i]);
	printf("\n");
}