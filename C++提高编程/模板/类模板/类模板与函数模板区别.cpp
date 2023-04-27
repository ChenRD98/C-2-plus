#include<iostream>
using namespace std;
#include<string>

//类模板在模板参数列表中可以有默认参数
template<class NameType, class AgeType = int>
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

void test01() {
	//Person p1("孙悟空", 999);//报错，缺少参数列表，类模板没有自动类型推导的使用方式
	Person<string, int> p1("孙悟空", 999);
	p1.showPerson();
}

void test02() {
	Person<string>p2("猪八戒", 999);
	p2.showPerson();
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}