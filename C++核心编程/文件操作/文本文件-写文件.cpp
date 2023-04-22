#include<iostream>
#include<fstream>
using namespace std;

void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::app | ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs.close();
}

int main() {
	test01();
	system("pause");
	return 0;
}