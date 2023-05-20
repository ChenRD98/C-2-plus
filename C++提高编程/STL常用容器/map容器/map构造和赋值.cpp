#include<iostream>
#include<map>
using namespace std;

void printMap(const map<int, int>&mp) {
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
}

void test01() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	map<int, int>m2(m);
	printMap(m2);

	map<int, int>m3;
	m3 = m2;
	printMap(m3);

}

int main() {
	test01();
	system("pause");
	return 0;
}