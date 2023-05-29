#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void test01() {
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}
	//参数3是起始累加值
	int num = accumulate(v.begin(), v.end(), 1000);
	cout << "total: " << num << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}