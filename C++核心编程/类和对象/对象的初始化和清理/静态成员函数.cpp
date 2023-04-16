#include<iostream>
using namespace std;
//静态成员函数
//1、所有对象共享一个函数
//2、静态成员函数只能访问静态成员变量
class Person {
public:
	//静态成员函数
	static void func() {
		m_A = 100;//静态成员函数可以访问静态成员变量
		cout << "static void func调用" << m_A << endl;
		//m_B = 100;//报错，非静态成员引用必须与特定对象相对
		//无法区分时哪个对象的属性
	}
	static int m_A;
	int m_B = 10;

	//静态成员函数有访问权限
private:
	static void func2() {
		cout << "static void func2调用" << m_A << endl;
	}
};
int Person::m_A = 0;
void test01() {
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func();
	//Person::func2();//私有域下类外不可访问
}

int main() {
	test01();
	system("pause");
	return 0;
}