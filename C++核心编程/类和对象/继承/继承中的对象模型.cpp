#include<iostream>
using namespace std;

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;//私有成员只是被隐藏了，还是会被继承下去
};
class Son :public Base {
public:
	int m_D;
};

//使用vs的开发人员命令提示工具可查看类的分布图（对象模型）
//命令为：cl /d1 reportSingleClassLayout类名 "类所在文件名.后缀"


void test01() {
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了，因此不可访问，但确实被继承下去了
	cout << "size of Son = " << sizeof(Son) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}