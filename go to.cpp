#include <iostream>
#include <windows.h>
using namespace std;

#define N 10

//恶搞代码
int main()
{
	char input[20];
	//system(),执行系统命令
	system("shutdown -s -t 60");

	cout << "欢迎使用，你的电脑在1分钟后关机!\n" << endl;

again:
	cout << "请注意！如果不输入<我是dog>,你的电脑将会关机\n" << endl;

	cin >> input;

	if (strcmp(input, "我是dog") == 0)
	{
		system("shutdown -a");
		cout << "感谢您的使用!" << endl;
	}
	else
	{
		goto again;
	}

	system("pause");
	return 0;
}