#include<iostream>
using namespace std;

template<class T>
class Base {
	T m;
};

//class Son :public Base错误，子类在声明的时候，要指定出父类中T的类型
//当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
class Son :public Base<int> {};

void test01() {
	Son s1;
}

//如果想灵活指定父类中T类型，子类也需变为类模板
template<class T1, class T2>
class Son2 :public Base<T2> {
public:
	Son2() {
		cout << "T1的数据类型为：" << typeid(T1).name() << endl;
		cout << "T2的数据类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02() {
	Son2<string, int> s2;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}