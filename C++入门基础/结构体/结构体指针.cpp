//结构体指针：通过指针访问结构体中的成员
//利用操作符->可以通过结构体指针访问结构体属性
#include<iostream>
#include<string>
using namespace std;
//定义学生结构体
struct student {
	string name;
	int age;
	int score;
};

int main() {
	//创建结构体变量
	struct student s = { "张三", 18, 100 };

	//通过指针指向结构体变量
	struct student* p = &s;
	//通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name
		<< "年龄：" << p->age
		<< "分数：" << p->score << endl;
	system("pause");
	return 0;
}