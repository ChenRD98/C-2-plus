#include<iostream>
using namespace std;

class CPU {
public:
	virtual void calculate() = 0;
};

class VideoCard {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	//构造函数中传入三个零件指针
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作的函数
	void Work() {
		//调用每个零件工作的接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数 释放3个电脑零件
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPU零件指针
	VideoCard* m_vc;//显卡零件指针
	Memory* m_mem;//内存条零件指针
};

//具体零件厂商
//Intel厂商
class IntelCpu :public CPU {
public:
	virtual void calculate() {
		cout << "Intel的CPU开始计算!" << endl;
	}
};
class IntelVC :public VideoCard {
public:
	virtual void display() {
		cout << "Intel的VideoCard开始显示!" << endl;
	}
};
class IntelMem :public Memory {
public:
	virtual void storage() {
		cout << "Intel的Memory开始存储!" << endl;
	}
};
//Lenovo厂商
class LenovoCpu :public CPU {
public:
	virtual void calculate() {
		cout << "Lenovo的CPU开始计算!" << endl;
	}
};
class LenovoVC :public VideoCard {
public:
	virtual void display() {
		cout << "Lenovo的VideoCard开始显示!" << endl;
	}
};
class LenovoMem :public Memory {
public:
	virtual void storage() {
		cout << "Lenovo的Memory开始存储!" << endl;
	}
};

//开始组装
void test01() {
	//第一台电脑零件
	CPU* intelCpu = new IntelCpu;
	VideoCard* intelVc = new IntelVC;
	Memory* intelMem = new IntelMem;
	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelVc, intelMem);
	computer1->Work();
	delete computer1;

	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCpu, new LenovoVC, new LenovoMem);
	computer2->Work();
	delete computer2;

	//第三台电脑组装
	Computer* computer3 = new Computer(new LenovoCpu, new IntelVC, new LenovoMem);
	computer3->Work();
	delete computer3;
}

int main() {
	test01();
	system("pause");
	return 0;
}