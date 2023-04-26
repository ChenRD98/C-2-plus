#include<iostream>
using namespace std;

template<class T>//typename 可以替换成class，无具体区别
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//1、自动类型推导，必须推导出一致数据类型T才可以使用
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);
	//mySwap(a, c);//报错，必须推导出一致数据类型T才可以使用
	cout << "a = " << a << "\tb = " << b << endl;
}

//2、模板必须要确定出T数据类型，才可以使用
template<class T>
void func() {
	cout << "func调用" << endl;
}

int main() {
	test01();
	//func();//报错，模板必须要确定出T数据类型
	system("pause");
	return 0;
}
