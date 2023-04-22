#include<iostream>
#include<fstream>
using namespace std;

class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
	ifstream ifs("person.txt", ios::binary | ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	ifs.close();
}

int main() {
	test01();
	system("pause");
	return 0;
}