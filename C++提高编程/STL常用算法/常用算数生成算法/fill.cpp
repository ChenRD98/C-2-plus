#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

class MyPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test01() {
	vector<int> v;
	v.resize(10);
	//后期重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}