#include<iostream>
#include<list>
using namespace std;

class Person {
public:
	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

void printList(const list<Person>& L) {
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;;
	}
}

bool comparePerson(Person &p1, Person &p2) {
	//按照年龄升序，年龄相同降序
	if (p1.m_Age != p2.m_Age) {
		return p1.m_Age < p2.m_Age;
	}
	else {
		return p1.m_Height > p2.m_Height;
	}
}

void test01() {
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	list<Person>L1;
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);
	printList(L1);

	//排序
	cout << "--------------" << endl;
	cout << "排序后：" << endl;
	//写回调函数指定排序规则
	L1.sort(comparePerson);
	printList(L1);
}

int main() {
	test01();
	system("pause");
	return 0;
}