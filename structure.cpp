#include <iostream>
#include <windows.h>

using namespace std;


struct student {//ѧ��
	string studentName;
	int score;
};

struct teacher//��ʦ
{
	string teacherName;
	struct student stu[2];//�м���ѧ��
};

void assign(struct teacher* p, int teanum,int stunum)//��ֵ���� �������ṹ���ַ����ʦ��ѧ������
{
	string teaName, stuNmae;
	int stuGrade,i,j;
	for (i = 0; i < teanum; i++)
	{
		cout << "�����" << i + 1 << "����ʦ����" << endl;
			cin>> teaName;
			p[i].teacherName = teaName;
			for (j = 0; j < stunum; j++)
			{
				cout << "�����" <<i + 1 << "����ʦ�ĵ�"<< j + 1 << "��ѧ������" << endl;
				cin >> stuNmae;
				p[i].stu[j].studentName = stuNmae;
				cout << "�����" << i + 1 << "����ʦ�ĵ�" << j + 1 << "��ѧ���ɼ�" << endl;
				cin >> stuGrade;
				p[i].stu[j].score = stuGrade;
			}
	}
}

void output(struct teacher* p, int teanum, int stunum)//��ӡ������� �������ṹ���ַ����ʦ��ѧ������
{
	int i, j;
	for (i = 0; i < teanum; i++)
	{
		cout << "\t------��Ϣ"<<i+1<<"------" << endl;
		cout << "��" << i + 1 << "����ʦ����:"<<p[i].teacherName << endl;

		for (j = 0; j < stunum; j++)
		{
			cout << "��" << i + 1 << "����ʦ�ĵ�" << j + 1 << "��ѧ������" << p[i].stu[j].studentName << endl;
			cout << "��" << i + 1 << "����ʦ�ĵ�" << j + 1 << "��ѧ���ɼ�" << p[i].stu[j].score << endl;
			cout << endl;
		}
	}
}

int main()
{
	int i, j;
	struct teacher tea[3];

	assign(tea, 2,2);//Ԫ�ظ�ֵ
	output(tea, 2, 2);

	system("pause");
	return 0;
}