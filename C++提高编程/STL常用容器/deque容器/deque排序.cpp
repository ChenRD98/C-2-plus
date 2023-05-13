#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	printDeque(d1);
	//排序 默认排序规则 从小到大 升序
	//对于支持随机访问的迭代器的容器，都可以使用sort算法直接排序
	sort(d1.begin(), d1.end());
	cout << "排序后：" << endl;
	printDeque(d1);
}

int main() {
	test01();
	system("pause");
	return 0;
}