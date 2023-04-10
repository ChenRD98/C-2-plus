#include<iostream>
using namespace std;

//new的基本语法
int* func() {
	//在堆区创建整形数据
	int* p = new int(10);
	return p;
}

void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;	//内存已经被释放，再次访问就是非法操作，会报错
}

//在堆区利用new开辟数组
void test02() {
	//创建10个整形数据的数组在堆区
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[] arr;
}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}