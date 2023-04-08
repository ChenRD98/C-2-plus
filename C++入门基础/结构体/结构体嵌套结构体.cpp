#include<iostream>
#include<string>
using namespace std;

//定义学生结构体
struct student {
	int age;
	string name;
	int score;
};

//定义老师结构体
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};

int main() {
	teacher t = { 10000, "老王", 50, {20, "小王", 60} };
	cout << "老师姓名：" << t.name << "老师编号：" << t.id
		<< "老师年龄：" << t.age << "老师辅导的学生姓名：" << t.stu.name
		<< "老师辅导的学生年龄：" << t.stu.age
		<< "老师辅导的学生分数：" << t.stu.score << endl;


	system("pause");
	return 0;
}