#include<iostream>
using namespace std;
#include<string>

void test01() {
	string str = "abcdefg";
	string subStr = str.substr(2, 4);
	cout << subStr << endl;
}
//使用操作
void test02() {
	string email = "hello@sina.com";
	//从邮件的地址中获取用户名信息
	int pos = email.find('@');
	string usrName = email.substr(0, pos);
	cout << usrName << endl;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}