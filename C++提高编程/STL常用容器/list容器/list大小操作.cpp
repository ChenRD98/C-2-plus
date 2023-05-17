#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>&L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	if (L1.empty()) {
		cout << "List容器为空" << endl;
	}
	else {
		cout << "List容器不为空" << endl;
		cout << "List容器的元素个数为：" << L1.size() << endl;
	}

	L1.resize(10, 1000);
	printList(L1);

	L1.resize(2);
	printList(L1);
}

int main() {
	test01();
	system("pause");
	return 0;
}