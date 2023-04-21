#include<iostream>
using namespace std;

class Base {
public:
	//纯虚函数
	//只要有一个纯虚函数，该类称为抽象类
	//特点：
	//1、无法实例化对象
	//2、抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;

};

class Son :public Base {
public:
	virtual void func() {
		cout << "func函数调用" << endl;
	}
};

void test01() {
	//Base b;//报错，抽象类无法实例化对象
	//new Base;//用堆区也不行

	//Son s;//若没有重写，不允许实例化

	Base* base = new Son;
	base->func();
	delete base;
}

int main() {
	test01();

	system("pause");
	return 0;
}