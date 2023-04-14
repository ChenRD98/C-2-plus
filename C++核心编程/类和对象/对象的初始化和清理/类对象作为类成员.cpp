#include<iostream>
#include<string>
using namespace std;
//类对象作为类成员
class Phone {
public:
	Phone(string pName):m_PName(pName) {
		cout << "Phone的构造函数调用" << endl;
	}
	~Phone() {
		cout << "Phone的析构函数调用" << endl;
	}
	string m_PName;

};
class Person {
public:
	//m_Phone(pName)相当于Phone m_Phone = pName隐式转换法
	Person(string name, string pName): m_Name(name), m_Phone(pName) {
		cout << "Person的构造函数调用" << endl;
	}
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	string m_Name;
	Phone m_Phone;
};
//当其他类对象作为本类成员，构造时候先构造类对象，在构造自身
//析构先释放自身后释放类对象
void test01() {
	Person p("张三", "苹果MAX");
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}