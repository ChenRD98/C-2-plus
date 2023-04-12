#include<iostream>
using namespace std;

//公共权限 public	成员 类内外都可访问
//保护权限 protected成员 类内可以，类外不可以，子类可以访问父类
//私有权限 private	成员 类内可以，类外不可以，子类不可以访问父类

class Person {
	//公共权限
public:
	string m_Name;

protected:
	string m_Car;

private:
	int m_Password;

	void func() {
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main() {
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";	//报错，类外不可访问

	system("pause");
	return 0;
}