#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person {
public:
	char m_Name[64];//用C语言写一般不会出问题，因为C是底层
	int m_Age;
};

void test01() {
	ofstream ofs("person.txt", ios::binary | ios::out);
	//ofs.open("person.txt", ios::binary | ios::out);
	//写文件
	Person p = {"张三", 18};
	//&p返回的是Person*类型，所以需要强转
	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();
}

int main() {
	test01();
	system("pause");
	return 0;
}