#include<iostream>
using namespace std;

class Person1 {
public:
	void showPerson1() {
		cout << "Person1 show" << endl;
	}
};
class Person2 {
public:
	void showPerson2() {
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass {
public:
	T obj;
	//类模板中的成员函数
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

void test01() {
	MyClass<Person1>m;
	m.func1();//此时指定类型为Person1类型，func2没有创建所以不报错
	//m.func2();//编译出错，说明函数调用才会去创建成员函数
}

int main() {
	test01();
	system("pause");
	return 0;
}