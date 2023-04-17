#include<iostream>
using namespace std;

class Person {
public:
	//this指针本质是指针常量，指针的指向是不可修改的
	//this相当于Person* p const this;
	//const Person* p const this;这样指针指向的值也不可以修改
	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可修改
	void showPerson() const {
		//m_A = 100;//报错，不可修改，与this指针有关
		//this->m_A = 100;
		//this = NULL;//this指针是不可以修改指针的指向
		this->m_B = 100;
	}
	void func() {

	}
	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中也可以修改
};

void test01() {
	Person p;
	p.showPerson();
}

void test02() {
	const Person p;//常对象
	//p.m_A = 100;//报错，该对象属性不可修改
	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//报错，不能调用非常函数，因为普通成员函数可以修改成员属性
}

int main() {
	system("pause");
	return 0;
}