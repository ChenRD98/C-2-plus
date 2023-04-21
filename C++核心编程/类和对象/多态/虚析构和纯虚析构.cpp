#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
	Animal(){
		cout << "Animal构造函数调用" << endl;
	}
	//虚析构
	/*virtual ~Animal() {
		cout << "Animal析构函数调用" << endl;
	}*/
	//纯虚析构，需要声明也需要实现
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;

	virtual void speak() = 0;
};
//纯虚函数具体代码实现（因为父类有些属性也开辟在堆区）
Animal::~Animal() {
	cout << "Animal析构函数调用" << endl;
}

class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);//new返回一个指针
	}

	virtual void speak() {
		cout << "小猫"<< *Cat::m_Name <<"在说话" << endl;
	}

	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//删除父类指针的时候不会调用子类的析构代码，导致子类如果有堆区属性会出现内存泄漏
	//解决方法：将父类析构改为虚析构或者纯虚析构
	delete animal;
}

int main() {
	test01();
	system("pause");
	return 0;
}