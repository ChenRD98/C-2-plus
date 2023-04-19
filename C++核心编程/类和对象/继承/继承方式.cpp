#include<iostream>
using namespace std;
//继承方式

//公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
//公共继承
class Son1 :public Base1 {
public:
	void func() {
		m_A = 10;
		m_B = 10;
		//m_C = 10;//报错，私有权限，不可访问
	}
};
void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//报错，保护权限，类外不能访问
}
//保护继承
class Son2 :protected Base1 {
public:
	void func() {
		m_A = 10;
		m_B = 10;
		//m_C = 10;//私有权限，不可访问
	}
};
void test02() {
	Son2 s2;
	//s2.m_A = 10;//保护权限，类外不能访问
	//s2.m_B = 10;
}
//私有继承
class Son3 :private Base1 {
public:
	void func() {
		m_A = 10;
		m_B = 10;
		//m_C = 10;//私有权限，不可访问
	}
};
void test03() {
	Son3 s3;
	//s3.m_A = 10;//私有权限，类外不能访问
	//s3.m_B = 10;
}

class GrandSon3 :public Son3 {
public:
	void func() {
		//m_A = 10;//私有权限，不可访问
		//m_B = 10;
		//m_C = 10;
	}
};

int main() {
	system("pause");
	return 0;
}