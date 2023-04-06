//封装一个函数，利用冒泡排序，实现对整型数组排序
#include<iostream>
#include"bubbleSort.h"
#include"printArray.h"

using namespace std;

int main() {
	int arr[10] = { 4, 3, 6, 9, 1, 2, 10, 8, 7, 5 };

	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);

	printArray(arr, len);

	system("pause");
	return 0;
}