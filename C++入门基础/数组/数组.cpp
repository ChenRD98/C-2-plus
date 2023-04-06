#include<iostream>
using namespace std;

int main() {
//数组特点：每个数据元素相同数据类型，数组由连续的内存位置组成
	int arr1[2];
	arr1[0] = 1;
	arr1[0] = 2;
	arr1[0] = 3;
	float arr2[3] = { 1.2f, 1.3f, 1.4f };
	char arr3[] = {'a', 'b', 'c'};

	//通过数组名获取数组首地址
	//cout << "数组首地址为：" << (int)arr1 << endl;
	//cout << "数组中第一个元素地址为：" << (int)&arr1[0] << endl;

//五只小猪找最重
	int arr4[5] = { 300, 350, 200, 400, 250 };
	int max = 0;
	for (int i = 0; i < 5 ; i++)
	{
		if (arr4[i] > max) {
			max =  arr4[i];
		}
	}
	cout << "最重的小猪体重为" << max << endl;

//数组元素逆置
	int arr5[] = { 1, 3, 2, 5, 4 };
	int start = 0;	//起始元素下标
	int end = sizeof(arr5) / sizeof(arr5[0]) - 1;	//末尾元素下标
	while (start < end) {
		int temp = arr5[start];	//临时存放
		arr5[start] = arr5[end];
		arr5[end] = temp;
		start++;
		end--;	
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr5[i] << endl;
	}

//冒泡排序，数组内升序降序
	int arr6[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
	cout << "排序前";
	for (int i = 0; i < 9; i++) {
		cout << arr6[i];
	}
	//总共排序轮数为 元素个数-1
	for (int i = 0; i < 9 - 1; i++) {
		//内层循环对比 次数 = 元素个数-当前轮数-1
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr6[j] > arr6[j + 1]) {
				int temp1 = arr6[j];
				arr6[j] = arr6[j + 1];
				arr6[j + 1] = temp1;
			}
		}
	}
	cout << "升序后";
	for (int i = 0; i < 9; i++) {
		cout << arr6[i];
	}
	cout << endl;

//二维数组
	int arr7[2][3] = { {1,2,3},{2,3,4} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr7[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}