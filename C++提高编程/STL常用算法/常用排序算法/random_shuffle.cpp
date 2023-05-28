#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

class Print01 {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test01() {
	srand((unsigned int)time(NULL));
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), Print01());
	cout << endl << "------------------" << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print01());
}

int main() {
	test01();
	system("pause");
	return 0;
}