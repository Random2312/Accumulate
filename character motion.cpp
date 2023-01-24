#include <iostream>
#include <windows.h>
using namespace std;

#define N 10

//两端字符向中间移动
int main()
{
	char str1[] = "welcome to beijing!!!";
	char str2[] = "#####################";

	//左右下标
	int left = 0;
	int right = strlen(str1) - 1;

	while (left <= right)
	{
		str2[left] = str1[left];
		str2[right] = str1[right];

		cout << str2 << endl;

		Sleep(1000);
		system("cls");

		left++;
		right--;
	}

	cout << str2 << endl;

	system("pause");
	return 0;
}