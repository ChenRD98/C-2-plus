#include<iostream>
#include<map>
using namespace std;

void test01() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m.insert(pair<int, int>(3, 40));	//插不进去，map不允许重复key元素

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end()) {
		cout << "查到了元素key = " << pos->first << " value = " << pos->second << endl;
	}
	else {
		cout << "查不到" << endl;
	}

	int num = m.count(3);
	//multimap的count统计可能大于1
	cout << "num = " << num << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}