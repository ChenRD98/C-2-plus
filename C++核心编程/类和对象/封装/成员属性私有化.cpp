#include<iostream>
#include<string>
using namespace std;

//1、可以自己控制读写权限——通过在公共权限下写接口获取读写权限
//2、对于写权限，可以检测数据有效性

class Person {
public:	//设置私有后，一般会在public写一些接口控制私有权限
	//设置姓名
	void setName(string name) {
		m_Name = name;
	}
	//获取姓名
	string getName() {
		return m_Name;
	}
	//获取设置年龄 可读可写 如果想修改（年龄的范围必须是0~150之间）
	int getAge() {
		m_Age = 0;
		return m_Age;
	}
	void setAge(int age) {
		//判断数据有效性
		if (age < 0 || age>150) {
			cout << "输入有误！" << endl;
			return;
		}
		m_Age = age;
	}
	//设置情人
	void setLover(string name) {
		m_Lover = name;
	}
private:
	string m_Name;//可读可写
	int m_Age;
	string m_Lover;//只写
};

int main() {
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;
	//cout << "年龄为：" << p.getAge() << endl;

	p.setLover("李四");
	//cout << "情人为：" << p.m_Lover << endl;	//报错，因为p.m_Lover不可读
	
	p.setAge(1000);
	cout << "年龄为：" << p.getAge() << endl;

	system("pause");
	return 0;
}