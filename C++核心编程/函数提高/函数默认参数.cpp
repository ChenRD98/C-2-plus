#include<iostream>
using namespace std;
//如果没有传入数据，就用默认值
int func(int a, int b = 20, int c = 30) {
	return a + b + c;
}
//函数声明和实现只能有一个有默认参数
int main() {
	cout << func(10, 30) << endl;
	system("pause");
	return 0;
}