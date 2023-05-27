#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};

//查找 内置数据类型
void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	
	if (it == v.end()) {
		cout << "未找到！" << endl;
	}
	else {
		cout << "找到大于5的数字：" << *it << endl;
	}
}

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class Greater20 {
public:
	bool operator()(Person &p){
		return p.m_Age > 20;
	}
};

//查找 自定义数据
void test02() {
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());

	if (it == v.end()) {
		cout << "未找到！" << endl;
	}
	else {
		cout << "找到年龄大于20的person  姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}