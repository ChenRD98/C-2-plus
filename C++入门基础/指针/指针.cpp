#include<iostream>
using namespace std;
//可以通过指针间接访问内存，利用指针变量保存地址，指针=地址

//地址传递
void swap1(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	int a = 10;
	int b = 10;
	int* p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;

	//可以通过解引用的方式来找到指针指向的内存，*指针
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	//指针也是一种数据类型，在32位操作系统下占用四个字节，在64位操作系统下占用八个字节
	//空指针：指针变量指向内存中编号为0的空间，用于初始化指针变量
	//空指针指向的内存不可访问
	int* p1 = NULL;
	//野指针：指针变量指向非法的内存空间，避免出现
	//常量指针，指针的指向可以修改，指针指向的值不能改
	const int* p2 = &a;
	//指针常量，指向不可以改，指向的值可以改
	int* const p3 = &a;
	//const既修饰指针，又修饰常量
	const int* const p4 = &a;

//指针访问数组中元素
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p5 = arr;
	
	for (int i = 0; i < 10; i++) {
		cout << *p5 << endl;
		p5++;
	}
//指针作函数参数，可以修改实参的值
	swap1(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}