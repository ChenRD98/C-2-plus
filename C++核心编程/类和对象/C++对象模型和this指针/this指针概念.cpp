#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		//this指针指向的是 被调用成员函数 所属的对象
		this->age = age;
	}

	void PersonAddPerson(Person& p) {
		this->age += p.age;
	}

	//引用的方式返回的是他自己，要是Person这种值的返回就不是他自己，而是个新的
	Person& PersonAddPerson2(Person& p) {
		this->age += p.age;
		//this指向p2的指针，*this指向的就是p2这个对象本体
		return*this;
	}
	int age;
};
//1、解决名称冲突
void test01() {
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}
//2、返回对象本身用*this
void test02() {
	Person p1(10);

	Person p2(20);

	p2.PersonAddPerson(p1);
	cout << "p2的年龄为：" << p2.age << endl;
	//报错，p2.PersonAddPerson(p1)返回void类型，需要return* this返回对象本身
	//p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);

	//链式编程思想
	p2.PersonAddPerson2(p1).PersonAddPerson2(p1).PersonAddPerson2(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}