#include<iostream>
using namespace std;
#include<string>

void test01() {
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0) {
		cout << "str1等于str2" << endl;
	}
	else if (str1.compare(str2) == 1) {
		cout << "str1大于str2" << endl;
	}
	else {
		cout << "str1小于str2" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}