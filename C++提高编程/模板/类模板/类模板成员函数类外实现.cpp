#include<iostream>
using namespace std;
#include<string>

template<class T1, class T2>
class Person {
public:
	//成员函数类内声明
	Person(T1 name, T2 age);
	void showPerson();
private:
	T1 m_Name;
	T2 m_Age;
};

//类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
}

void test01() {
	Person<string, int>p("张三", 20);
	p.showPerson();
}

int main() {
	test01();
	system("pause");
	return 0;
}