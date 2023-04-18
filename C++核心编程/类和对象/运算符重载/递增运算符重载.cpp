#include<iostream>
using namespace std;

class MyIntager {
	friend ostream& operator<< (ostream& out, MyIntager myint);
public:
	MyIntager() {
		m_Num = 0;
	}
	//重载++运算符
	//前置递增  返回引用时为了一直对一个数据进行递增操作
	MyIntager& operator++() {
		m_Num++;
		return*this;
	}
	//后置递增
	//MyIntager& operator++(int)  int代表占位参数，可以用于区分前置后置
	MyIntager operator++(int) {
		MyIntager temp = *this;
		this->m_Num++;
		return temp;
	}
private:
	int m_Num;
};

//左移运算符重载
ostream& operator<< (ostream& out, MyIntager myint) {
	out << myint.m_Num;
	return out;
}

void test01() {
	MyIntager myint;
	cout << ++myint << endl;
}
void test02() {
	MyIntager myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}