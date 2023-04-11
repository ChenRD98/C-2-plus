#include<iostream>
using namespace std;
//值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a= " << a << endl;
	cout << "swap01 b= " << b << endl;
}

//地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap02 a= " << *a << endl;
	cout << "swap02 b= " << *b << endl;
}

//引用传递
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap03 a= " << a << endl;
	cout << "swap03 b= " << b << endl;
}
int main() {
	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "值传递后实参结果：" << endl;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	mySwap02(&a, &b);
	cout << "地址传递后实参结果：" << endl;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	mySwap03(a, b);
	cout << "引用传递后实参结果：" << endl;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}