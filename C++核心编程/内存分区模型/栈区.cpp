#include<iostream>
using namespace std;

//栈区注意事项：不要返回局部变量的地址

int* func() {
	int a = 10;//局部变量	存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;
}

int main() {
	int* p = func();

	cout << *p << endl;//第一次正确是因为编译器做了一次保留
	cout << *p << endl;//第二次乱码是因为不再保留

	system("pause");
	return 0;
}