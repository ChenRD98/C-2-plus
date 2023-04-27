#include<iostream>
#include<string>
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson() {
		cout << "name: " << this->m_Name << "\tage: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};
//尖括号<>模板的参数列表
void test01() {
	Person<string, int> p1("孙悟空", 999);
	p1.showPerson();
}

int main() {
	test01();
	system("pause");
	return 0;
}