#include<iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person默认构造函数调用" << endl;
	}
	~Person() {
		cout << "Person析构函数调用" << endl;
	}
	Person(int age) {
		cout << "Person有参构造函数调用" << endl;

		m_Age = age;
	}
	Person(const Person& p) {
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	int m_Age;
};
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1;
	Person p2(10);
	Person p3(p2);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}
//2、值传递的方式给函数参数传值，值传递会拷贝一个临时的副本
void doWork(Person p) {

}
void test02() {
	Person p;
	doWork(p);
}
//3、以值方式返回局部对象
Person doWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;//拷贝一个返回
}
void test03() {
	Person p = doWork2();
	cout << (int*)&p << endl;
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}