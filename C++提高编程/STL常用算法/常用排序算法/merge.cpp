#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Print01 {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test01() {
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	for_each(v1.begin(), v1.end(), Print01());
	cout << endl;
	for_each(v2.begin(), v2.end(), Print01());
	cout << endl;
	vector<int>v;
	v.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	for_each(v.begin(), v.end(), Print01());
	cout << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}