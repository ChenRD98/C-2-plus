#include<iostream>

using namespace std;

int main() {
	//算数运算符：加减乘除，取模%，前后置递增递减
	int a1 = 10;
	int b1 = 3;

	//两个int相除，舍去小数位留整数
	cout << a1 / b1 << endl;
	
	b1 = a1++;
	int b2 = ++a1;
	
	cout << b1 << b2 << endl;

	//赋值运算符：赋值，加减乘除模等于
	a1 += 2;
	cout << a1 << endl;

	//比较运算符，=，!=......，返回真假值
	//逻辑运算符，与&&或||非！，返回真假值

	system("pause");

	return 0;
}
