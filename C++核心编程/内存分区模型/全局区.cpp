#include<iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

const int c_b = 10;

int main() {
	//全局区

	//全局变量、静态变量、常量

	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;
	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;

	//字符串常量
	cout << "字符串常量的地址为：" << (int)&"Hello world" << endl;

	const int c_a = 10;
	cout << "const修饰的局部变量c_a的地址为：" << (int)&c_a << endl;
	cout << "const修饰的全局变量c_b的地址为：" << (int)&c_b << endl;

	system("pause");
	return 0;
}