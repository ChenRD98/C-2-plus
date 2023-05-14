#include<iostream>
#include<stack>
using namespace std;

void test01() {
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "栈的大小：" << s.size() << endl;

	//只要栈不为空，查看栈顶，并且出栈
	while (!s.empty()) {
		cout << "栈顶元素为：" << s.top() << endl;
		s.pop();
	}
	cout << "栈的大小：" << s.size() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}