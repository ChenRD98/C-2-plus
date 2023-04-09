//设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中放5名英雄。
//通过冒泡排序算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后结果
#include<iostream>
#include<string>

using namespace std;

struct Hero {
	string name;
	int age;
	string sex;
};

//排序
void bubbleSort(Hero hArray[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (hArray[j].age > hArray[j + 1].age) {
				struct Hero temp = hArray[j + 1];
				hArray[j + 1] = hArray[j];
				hArray[j] = temp;
			}
		}
	}
}
//打印
void printInfo(Hero hArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "英雄名称：" << hArray[i].name
			<< "英雄年龄：" << hArray[i].age
			<< "英雄性别：" << hArray[i].sex << endl;
	}
}

int main() {
	struct Hero hArray[5] = {
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"},
	};
	
	int len = sizeof(hArray)/sizeof(hArray[0]);
	bubbleSort(hArray, len);
	printInfo(hArray, len);

	system("pause");
	return 0;
}