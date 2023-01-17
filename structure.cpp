#include <iostream>
#include <windows.h>

using namespace std;


struct student {//学生
	string studentName;
	int score;
};

struct teacher//老师
{
	string teacherName;
	struct student stu[2];//有几个学生
};

void assign(struct teacher* p, int teanum,int stunum)//赋值函数 参数：结构体地址，老师和学生人数
{
	string teaName, stuNmae;
	int stuGrade,i,j;
	for (i = 0; i < teanum; i++)
	{
		cout << "输入第" << i + 1 << "个老师姓名" << endl;
			cin>> teaName;
			p[i].teacherName = teaName;
			for (j = 0; j < stunum; j++)
			{
				cout << "输入第" <<i + 1 << "个老师的第"<< j + 1 << "个学生姓名" << endl;
				cin >> stuNmae;
				p[i].stu[j].studentName = stuNmae;
				cout << "输入第" << i + 1 << "个老师的第" << j + 1 << "个学生成绩" << endl;
				cin >> stuGrade;
				p[i].stu[j].score = stuGrade;
			}
	}
}

void output(struct teacher* p, int teanum, int stunum)//打印输出函数 参数：结构体地址，老师和学生人数
{
	int i, j;
	for (i = 0; i < teanum; i++)
	{
		cout << "\t------信息"<<i+1<<"------" << endl;
		cout << "第" << i + 1 << "个老师姓名:"<<p[i].teacherName << endl;

		for (j = 0; j < stunum; j++)
		{
			cout << "第" << i + 1 << "个老师的第" << j + 1 << "个学生姓名" << p[i].stu[j].studentName << endl;
			cout << "第" << i + 1 << "个老师的第" << j + 1 << "个学生成绩" << p[i].stu[j].score << endl;
			cout << endl;
		}
	}
}

int main()
{
	int i, j;
	struct teacher tea[3];

	assign(tea, 2,2);//元素赋值
	output(tea, 2, 2);

	system("pause");
	return 0;
}