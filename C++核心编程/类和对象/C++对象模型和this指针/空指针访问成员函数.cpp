#include<iostream>
using namespace std;
//空指针调用成员函数
class Person {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}

	void showPersonAge() {
		//为避免空指针调用成员函数引起的错误，写如下代码
		//保证代码强壮性
		if (this == NULL) {
			return;
		}
		cout << "age = " << m_Age << endl;
	}

	int m_Age;
};

void test01() {
	Person* p = NULL;

	p->showClassName();
	//报错的原因是传入的指针是NULL
	p->showPersonAge();//this->m_Age中this没有指向确切的东西，是个空的值
}

int main() {
	test01();
	system("pause");
	return 0;
}