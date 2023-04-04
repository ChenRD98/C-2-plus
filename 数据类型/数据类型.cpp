#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>	//用C++风格字符串要包含该头文件
using namespace std;

int main()
{
	short num1 = 32768;
	int num2 = 32768;
	long num3 = 10;
	long long num4 = 10;

	float f1 = 3.14f;
	double d1 = 3.14;
	float f2 = 3e-2f;

	char ch = 'a';

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	cin >> num4;
	cout << "num4 = " << num4 << endl;
	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "char = " << ch << endl;
	//字符型变量对应ASCII编码
	cout << (int)ch << endl;//（int）强行转为整数型
	//sizeof:统计数据类型所占内存大小
	cout << "short类型所占内存空间为：" << sizeof(short) << endl;

	char str1[] = "aaa\thello\\world\n";//C语言的风格
	string str2 = "abc\n";
	cout << str2<<str1;

	bool flag = true;
	cout << flag << endl;
	system("pause");
	return 0;
}