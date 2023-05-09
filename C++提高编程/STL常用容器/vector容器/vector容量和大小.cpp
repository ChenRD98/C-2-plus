#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty()) {
		cout << "vector为空" << endl;
	}
	else {
		cout << "vector不为空" << endl;
		cout << "v1的大小为" << v1.size() << endl;
		cout << "v1的容量为" << v1.capacity() << endl;
	}

	v1.resize(15);	//如果重新指定的比原来长了，默认用0填充
	printVector(v1);
	v1.resize(18, 100);
	printVector(v1);
	v1.resize(5);	//如果重新指定的比原来短了，超出的部分会被删除掉
	printVector(v1);
}

int main() {
	test01();
	system("pause");
	return 0;
}