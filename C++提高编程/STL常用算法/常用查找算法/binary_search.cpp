#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	//注意：容器必须是有序的序列，如果是无序序列，结果未知
	//v.push_back(2);此时无序，打印显示未找到，与实际不符
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (!ret) {
		cout << "未找到！" << endl;
	}
	else {
		cout << "找到" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}