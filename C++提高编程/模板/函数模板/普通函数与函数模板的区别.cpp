#include<iostream>
using namespace std;

//普通函数
int myAdd01(int a, int b) {
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a, T b) {
	return a + b;
}

//使用函数模板时，如果用自动类型推导，不会发生自动类型转换，即隐式类型转换
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';//c的ASCII码为99
	//普通函数调用时可以发生自动类型转换（隐式类型转换）10+99=109
	cout << myAdd01(a, c) << endl;
	
	//自动类型推导
	//cout << myAdd02(a, c) << endl;//报错，自动类型推导不支持隐式转换

	//显示指定类型，支持隐式转换
	cout << myAdd02<int>(a, c) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}