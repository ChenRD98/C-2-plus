#include<iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base构造函数" << endl;
	}
	~Base() {
		cout << "Base析构函数" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son构造函数" << endl;
	}
	~Son() {
		cout << "Son析构函数" << endl;
	}
};

void test01() {
	//Base b;
	//父类构造函数——子类构造函数——子类析构函数——父类析构函数
	Son s;
}

int main() {
	test01();
	system("pause");
	return 0;
}