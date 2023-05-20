#include<iostream>
#include<map>
using namespace std;

void printMap(const map<int, int>& mp) {
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	map<int, int>m;
	//第一种
	m.insert(pair<int, int>(1, 10));
	//第二种
	m.insert(make_pair(2, 20));
	//第三种
	m.insert(map<int, int>::value_type(3, 30));
	//第四种，不建议用于插数，一般用于访问，插一个不存在的key会创建一个value为0的对组
	m[4] = 40;
	//cout << m[5] << endl;
	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);
	m.erase(3);	//按照key删除
	printMap(m);
	//清空
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main() {
	test01();
	system("pause");
	return 0;
}