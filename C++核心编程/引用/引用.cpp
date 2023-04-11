#include<iostream>

using namespace std;

int main() {
	int a = 10;
	int& b = a;
	cout << b << endl;
	b = 20;
	cout << a << endl;

	//int &b;错误引用，必须初始化
	int c = 20;
	//int &b = c;错误，初始化后不可更改，不能成为别的变量别名
	b = c;//可行，是因为这是赋值操作，而不是更改别名

	system("pause");
	return 0;
}