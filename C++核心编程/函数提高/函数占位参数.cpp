#include<iostream>
using namespace std;
//占位参数可以有默认值
void func(int a, int, int = 10) {
	cout << "this is func" << endl;
}

int main() {

	func(10, 2);
	system("pause");
	return 0;
}