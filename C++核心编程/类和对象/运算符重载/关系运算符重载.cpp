#include<iostream>
#include<string>
using namespace std;
//重载关系运算符
class Person {
public:
	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	//重载==运算符
	bool operator==(Person& p) {
		if (p.m_Age == this->m_Age && p.m_Name == this->m_Name) {
			return true;
		}
		return false;
	}
	bool operator!=(Person& p) {
		if (p.m_Age != this->m_Age || p.m_Name != this->m_Name) {
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};

void test01() {
	Person p1("Tom", 18);
	Person p2("Jerry", 18);

	if (p1 == p2) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}
	if (p1 != p2) {
		cout << "不相等" << endl;
	}
	else {
		cout << "相等" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}