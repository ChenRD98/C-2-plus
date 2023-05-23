#include<iostream>
#include<string>
using namespace std;

class MyAdd {
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	}
};

class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator()(string tex) {
		cout << tex << endl;
		this->count++;
	}
	int count;	//内部自己状态
};

void test01() {
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

void test02() {
	MyPrint myPrint;
	myPrint("ABC");
	myPrint("hello world");
	cout << myPrint.count << endl;
}
//函数对象可以作为参数传递
void doPrint(MyPrint &mp, string test) {
	mp(test);
}

void test03() {
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}