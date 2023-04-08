#include<iostream>
#include<string>
using namespace std;
//用const修饰，防止误操作

struct student {
	string name;
	int age;
	int score;
};
////值传递每次都要拷贝一份参数数据，数据量大的占用大量内存空间
//void printStudents(student s) {
//	cout << "姓名：" << s.name
//		<< "年龄：" << s.age << "分数：" << s.score << endl;
//}
//地址传递，参数是个指针只占四个字节
//由于地址传递形参改变会导致实参改变，所以用const修饰指针，避免误操作
void printStudents(const student* s) {
	//s->age = 100;//会报错
	cout << "姓名：" << s->name
		 << "年龄：" << s->age << "分数：" << s->score << endl;
}

int main() {
	student s = { "张三", 20, 80 };

	printStudents(&s);

	system("pause");
	return 0;
}