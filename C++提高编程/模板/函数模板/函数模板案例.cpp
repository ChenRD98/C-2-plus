#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//交换函数模板
template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
//排序函数模板
template<class T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		int max = i;//认定最大值的下标
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			mySwap(arr[max], arr[i]);
		}
	}
}

//打印数组模板
template<class T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}
	cout << endl;
}

void test01() {
	//测试char数组
	char charArr[] = "badcfe";
	int num1 = sizeof(charArr) / sizeof(char);
	mySort(charArr, num1);
	printArray(charArr, num1);

	//测试int数组
	int intArr[] = { 1, 9, 5, 2, 7, 4, 6 };
	int num2 = sizeof(intArr) / sizeof(int);
	mySort(intArr, num2);
	printArray(intArr, num2);
}

int main() {
	test01();
	system("pause");
	return 0;
}