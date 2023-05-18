#include<iostream>
#include<set>
using namespace std;

void test01() {
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end()) {
		cout << "找到元素" << *pos << endl;
	}
	else {
		cout << "没找到元素" << endl;
	}
	//对于set而言，统计结果 要么是0要么是1
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}