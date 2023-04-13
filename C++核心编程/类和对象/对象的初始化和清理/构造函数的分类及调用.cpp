#include<iostream>
using namespace std;

class Person {
public:
	//普通构造函数
	Person() {
		cout << "Person无参构造函数的调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}
	~Person() {
		cout << "Person析构函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p) {
		//将传入的人身上的所有属性，拷贝到我身上
		cout << "Person拷贝构造函数的调用" << endl;
		age = p.age;
	}
	int age;
};
//调用
void test01() {
	//括号法
	//Person p1;//默认构造函数调用
	//Person p2(10);//有参构造函数调用
	//Person p3(p2);//拷贝构造函数调用

	//注意事项1
	//调用默认构造函数的时候，不要加（）
	//会把Person p1()当成函数的声明，不会认为在创建对象
	//cout << "p2的年龄为：" << p2.age << endl;
	//cout << "p3的年龄为：" << p3.age << endl;

	//显示法
	Person p1;//无参构造
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造

	//Person(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉该对象
	//cout << "aaa" << endl;
	//注意事项2
	//不要利用拷贝构造函数初始化匿名对象，编译器会去掉小括号
	//Person(p3);//重定义错误，编译器认为Person(p3) === Person p3;对象声明
	//隐式转换法
	Person p4 = 10;//有参构造
	Person p5 = p4;//拷贝构造
}

int main() {
	//Person p;
	test01();
	system("pause");
	return 0;
}