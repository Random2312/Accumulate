#include <iostream>
#include <windows.h>

using namespace std;

//¥Ú”°≥À∑®±Ì
int main()
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
