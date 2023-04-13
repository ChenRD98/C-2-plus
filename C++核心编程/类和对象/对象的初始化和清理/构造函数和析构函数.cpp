#include<iostream>
using namespace std;

class Person {
public:
	//构造函数
	Person() {
		cout << "Person构造函数的调用" << endl;
	}
	//析构函数
	~Person() {
		cout << "Person析构函数的调用" << endl;
	}
};

void test01() {
	Person p;	//局部变量是在栈区，test01执行完会释放，调用析构代码
}

int main() {
	test01();
	//只有构造，因为全局变量在全局区，不会被释放，程序结束时调用析构
	//在system("pause")中断，按任意键继续，return 0之前调用析构函数
	Person p;
	system("pause");
	return 0;
}