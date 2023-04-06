#include<iostream>
#include"swap1.h"
using namespace std;


//有实际值的称为实参，否则为形参。
//如果函数不需要返回值，声明的时候写void

void swap(int num1, int num2) {
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

//函数的声明可以多次，定义只能一次。声明告诉编译器函数名称及如何调用函数
//main函数放前，定义函数放后，此时需要声明后面要定义用到的函数
int max(int a, int b);

//函数分文件编写,1创建头文件声明函数，2创建cpp文件定义函数

int main(){
	int a = 10;
	int b = 20;
	//实参值传递给形参，称为值传递，此时形参改变不会影响实参值
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << max(a, b) << endl;

	swap1(a, b);

	system("pause");
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}