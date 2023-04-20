#include<iostream>
using namespace std;

class Animal {
public:
	//虚函数
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal {
public:
	//重写：函数返回值类型、函数名、参数列表 完全相同
	void speak() {
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "小狗在说话" << endl;
	}
};


//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

//动态多态满足条件
//1、有继承关系
//2、子类要重写父类的虚函数

//动态多态使用
//父类的指针或者引用 指向子类对象

void dospeak(Animal& animal) {//父类引用 接收 子类对象
	animal.speak();
}

void test01() {
	Cat cat;
	dospeak(cat);

	Dog dog;
	dospeak(dog);
}

//多态前Animal内存空间占1，多态后占4字节，指针vfptr所占用，指向虚函数表vftable
//表内记录虚函数的地址&Animal::speak
//Cat内部结构继承过来一个指针vfptr，指向子类的虚函数表
//只继承的话表内记录的还是&Animal::speak
//但是发生重写后，表内会替换成子类的虚函数地址&Cat::speak
//当父类的指针或引用指向子类对象时候，发生多态

void test02() {
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}