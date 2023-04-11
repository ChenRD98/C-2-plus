#include<iostream>
using namespace std;

//不要返回局部变量的引用
int& test01() {
	int a = 10;
	return a;

}
//函数的调用可以作为左值
int& test02() {
	static int a = 10;//静态变量不放在栈区，放在全局区，程序结束后系统释放
	return a;
}
int main() {
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;//第一次编译器做了保留，第二次结果错误1，因为局部变量a的值已经被释放
	int& ref2 = test02();
	cout << ref2 << endl;
	cout << ref2 << endl;
	//函数的返回值是引用，则函数的调用可以作为左值
	test02() = 1000;//返回的是a的引用，相当于变量a = 1000，ref2就是a的别名
	cout << ref2 << endl;
	cout << ref2 << endl;

	system("pause");
	return 0;
}