#include<iostream>
using namespace std;
//函数重载的满足条件
//1、同一个作用域下
//2、函数名相同
//3、函数参数类型不同，或者个数不同，或者顺序不同
void func() {
	cout << "func的调用" << endl;
}

void func(int a) {
	cout << "func（int a）的调用" << endl;
}

void func(char a) {
	cout << "func（char a）的调用" << endl;
}

void func(int a, double b) {
	cout << "func（int a, double b）的调用" << endl;
}

void func(double a, int b) {
	cout << "func（double a, int b）的调用" << endl;
}

//注意：函数的返回值不能作为函数重载的条件
//下面注释代码报错
//int func(double a, int b) {
//	cout << "func（double a, int b）的调用" << endl;
//}

int main() {

	func();
	func(10);
	func('x');
	func(10, 10.00);
	func(10.00, 10);

	system("pause");
	return 0;
}