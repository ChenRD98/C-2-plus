#include<iostream>
using namespace std;

void func(int& ref) {
	ref = 100;
}

int main() {
	int a = 10;

	//引用自动转换为int* ref = &a；
	//指针常量指向不可改变，所以引用不可更改
	int& ref = a;
	//内部发现ref是引用，自动帮我们转换为*ref = 20；
	ref = 20;

	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);

	system("pause");
	return 0;
}