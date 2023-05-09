#include<iostream>
using namespace std;
#include<string>

void test01() {
	string str1 = "abcdefg";

	int pos = str1.find("de");

	if (pos == -1) {
		cout << "没有找到字符串" << endl;
	}
	else {
		cout << "找到字符串，pos = " << pos << endl;
	}

	//rfind从右往左查找，find从左往右找
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

void test02() {
	string str1 = "abcdefg";

	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}