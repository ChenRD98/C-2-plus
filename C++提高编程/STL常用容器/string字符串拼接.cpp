#include<iostream>
using namespace std;
#include<string>

void test01() {
	string str1;
	str1 += "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 += 'c';
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 += str1;
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.append("hello world");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.append("hello world", 5);
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.append(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.append(str6, 2, 2);
	cout << "str7 = " << str7 << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}