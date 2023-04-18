#include<iostream>
using namespace std;
//函数调用运算符重载
class MyPrint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}
};

void MyPrint02(string test) {
	cout << test << endl;
}

void test01() {
	MyPrint myPrint;
	myPrint("hello world");//由于使用起来非常像函数调用，所以称为仿函数
	MyPrint02("hello world");
}

//仿函数非常灵活，没有固定写法
//加法类
class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

void test02() {
	MyAdd myAdd;
	int ret = myAdd(10, 20);
	cout << ret << endl;

	//匿名函数对象，匿名对象MyAdd()当前行执行完立即释放
	cout << MyAdd()(100, 100) << endl;
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}