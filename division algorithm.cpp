#include <iostream>

using namespace std;

int main()
{
	int a, b, t;

	cout << "����������:" << endl;
	cin >> a >> b;

	//շת�����
	while (a % b)
	{
		t = a % b;
		a = b;
		b = t;
	}

	cout << "���Լ��" << b << endl;


	system("pause");
}