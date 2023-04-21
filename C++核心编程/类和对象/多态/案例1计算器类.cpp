#include<iostream>
#include<string>
using namespace std;
//普通写法
class Calculator {
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
		//如果向扩展新功能，需要修改源码
		//在真实开发中 提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
	}
	int m_Num1;
	int m_Num2;
};

void test01() {
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}

//利用多态实现计算器
//多态好处：
//1、组织结构清晰
//2、可读性强
//3、利于前期和后期扩展以及维护
//实现计算器抽象类
class AbstractCalculator {
public:
	virtual int getResult(){
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};

class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

class MulCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

void test02() {
	//加法运算
	//new AddCalculator创建了一个子类对象
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//用完后记得销毁堆区数据
	delete abc;

	//减法计算器
	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	//乘法计算器
	abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}