//结构体：用户自定义的数据类型
//struct 结构体名{结构体成员列表}；

#include<iostream>
#include<string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
}s3;

int main() {
//通过结构体创建变量：此时struct关键字可省略
	//1.struct 结构体名 变量名
	Student s1;
	//给s1属性赋值
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄:" << s1.age << "分数:" << s1.score << endl;
	//2.struct 结构体名 变量名 = {成员1值，成员2值...}
	struct Student s2 = { "李四", 19, 80 };
	cout << "姓名：" << s2.name << "年龄:" << s2.age << "分数:" << s2.score << endl;
	//定义结构体时顺便创建变量s3，不常用
	s3.name = "王五";
	s3.age = 25;
	s3.score = 70;
	cout << "姓名：" << s3.name << "年龄:" << s3.age << "分数:" << s3.score << endl;
//结构体数组：结构体放入数组中，方便维护
//struct 结构体名 数组名[元素个数] = { {}, {}, ...}
	struct Teacher teaArray[3] = {
		{"张一", 18, 100},
		{"张二", 28, 99},
		{"张四", 38, 66}
	};
	//给结构体数组中的元素赋值
	teaArray[2].age = 40;
	//遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << teaArray[i].name 
			 << "年龄：" << teaArray[i].age 
			 << "分数：" << teaArray[i].score << endl;
	}
	
	system("pause");
	return 0;
}