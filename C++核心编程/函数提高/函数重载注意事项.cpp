#include<iostream>
using namespace std;

//引用作为重载条件
void func(int& a) {
	cout << "func(int& a)调用" << endl;
}

void func(const int& a) {
	cout << "func(const int& a)调用" << endl;
}
//函数重载碰到默认参数
void func2(int a, int b = 10) {
	cout << "func2(int a, int b = 10)调用" << endl;
}

void func2(int a) {
	cout << "func2(int a)调用" << endl;
}

int main() {
	int a = 10;
	func(a);//走第一个版本，因为可读可写
	func(10);//走第二个版本，因为第一个版本传入为int& a = 10；不合法

	//func2(10);//报错，二义性

	system("pause");
	return 0;
}