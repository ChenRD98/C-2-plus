#include<iostream>
using namespace std;
//修饰形参，防止误操作

void showValue(const int& val) {
	//val = 1000;//报错，不可修改，const防止误操作
	cout << val << endl;
}

int main() {
	//int& ref = 10；//报错，引用本身需要一个合法的内存空间
	//加上const之后，编译器将代码修改为 int temp = 10; int& ref = temp;
	//const int& ref = 10;
	//ref = 20; //报错。加入const之后变为只读，不可修改

	int a = 100;
	showValue(a);

	system("pause");
	return 0;
}