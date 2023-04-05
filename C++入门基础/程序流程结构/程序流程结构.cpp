//顺序/选择/循环结构

#include<iostream>

using namespace std;

int main() {
	//if语句，3只小猪称重，谁最重？
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	if (a > b) {
		if (a > c) {
			cout << "a最重\n";
		}
		else {
			cout << "c最重\n";

		}
	}
	else {
		if (b > c) {
			cout << "b最重\n";
		}
		else {
			cout << "c最重\n";
		}
	}
	//三目运算符返回的是变量可以继续赋值，表达式1？表达式2：表达式3
	(a > b ? a : b) = 100;
	//switch语句，缺点：判断时候只能是整型或字符型，不能是区间

	//循环while，while（条件）{循环语句；}
	//do...while，do{循环语句；}while（条件）
	//for语句，for（起始表达式；条件表达式；末尾循环体）{循环语句；}

	//跳转语句break，跳出switch选择，跳出循环，内层嵌套
	//跳转语句continue，跳过本次循环未执行语句
	//跳转语句goto，无条件跳转，goto 标记；，标记：
	system("pause");

	return 0;
}