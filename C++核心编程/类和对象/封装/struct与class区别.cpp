#include<iostream>
using namespace std;

class C1 {
	int m_A;

};
struct C2 {
	int m_A;
};

int main() {
	//struct默认权限公共
	//class默认权限私有
	C1 c1;
	//c1.m_A = 100;	//报错，私有不可访问
	C2 c2;
	c2.m_A = 100;	//不报错，公共可访问

	system("pause");
	return 0;
}