#include<iostream>
#include<list>
//#include<algorithm>
using namespace std;

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2) {
	//降序 就让第一个数 ＞ 第二个数
	return v1 > v2;
}

void test01() {
	list<int>L1;
	L1.push_back(40);
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(20);
	L1.reverse();
	printList(L1);
	//sort(L1.begin(), L1.end());报错，所有不支持随机访问迭代器的容器，不可以使用标准算法
	//不支持随机访问迭代器的容器，内部会提供一些算法
	L1.sort();	//升序，从小到大
	printList(L1);

	L1.sort(myCompare); //写一个回调函数myCompare实现降序，从大到小
}

int main() {
	test01();
	system("pause");
	return 0;
}