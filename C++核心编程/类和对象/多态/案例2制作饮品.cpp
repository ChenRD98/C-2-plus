#include<iostream>
using namespace std;

class AbstractDrink {
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	//制作饮品
	void MakeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrink {
public:
	void Boil() {
		cout << "煮农夫山泉水" << endl;
	}
	void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea :public AbstractDrink {
public:
	void Boil() {
		cout << "煮矿泉水" << endl;
	}
	void Brew() {
		cout << "冲泡茶叶" << endl;
	}
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	void PutSomething() {
		cout << "加入柠檬" << endl;
	}
};

//制作函数
void doWork(AbstractDrink* abs) {
	abs->MakeDrink();
	delete abs;//防止内存泄漏
}

void test01() {
	//制作咖啡
	doWork(new Coffee);

	cout << "----------------" << endl;
	//制作茶叶
	doWork(new Tea);
}

int main() {
	test01();
	system("pause");
	return 0;
}