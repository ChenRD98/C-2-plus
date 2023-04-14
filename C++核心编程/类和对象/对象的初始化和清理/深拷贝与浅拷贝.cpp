#include<iostream>
using namespace std;
//深拷贝就是p1和p2分别创建一个堆区，这两个堆区地址不同，但内容相同
class Person {
public:
	Person() {
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age, int height) {
		m_Age = age;
		m_Height = new int(height);//身高放到堆区，地址给指针
		cout << "Person的有参构造函数调用" << endl;
	}
	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person(const Person& p) {
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//编译器默认实现的就是这行代码，浅拷贝
		//深拷贝操作

		m_Height = new int(*p.m_Height);
	}
	~Person() {
		//p1,p2堆区数据用完后应在析构函数中释放干净
		//析构代码，将堆区开辟的数据释放
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;//防止野指针出现，置空操作
		}
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
	int* m_Height;//指针，指向身高
};

void test01() {
	Person p1(18, 160);

	cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;

	Person p2(p1);//编译器进行了一次简单的浅拷贝操作

	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;

}

int main() {
	test01();
	system("pause");
	return 0;
}