#include<algorithm>
#include<vector>
using namespace std;

class MyPrint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

void test01() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget;
	vTarget.resize(min(v1.size(), v2.size()));
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	//用itEnd迭代器取代vTarget.end()迭代器，可以不输出后续0
	for_each(vTarget.begin(), itEnd, MyPrint());
	cout << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}