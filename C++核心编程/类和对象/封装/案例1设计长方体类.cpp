#include<iostream>
using namespace std;

class Cuboid {
public:
	//行为
	//设置长宽高
	void setL(int l) {
		m_L = l;
	}
	void setW(int w) {
		m_W = w;
	}
	void setH(int h) {
		m_H = h;
	}
	//获取长宽高
	int getL() {
		return m_L;
	}
	int getW() {
		return m_W;
	}
	int getH() {
		return m_H;
	}
	//求面积和体积
	int calArea() {
		return 2 * (m_L * m_W + m_W * m_H + m_H * m_L);
	}
	int calVolume() {
		return m_L * m_W * m_H;
	}
	//成员函数：判断两个长方体是否相等——只需要传入一个参数和类内的进行比对
	bool m_judgeEqu(Cuboid& c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		return false;
	}
private:
	//长
	int m_L;
	//宽
	int m_W;
	// 高
	int m_H;
};

//全局函数：判断两个长方体是否相等
bool g_judgeEqu(Cuboid& c1, Cuboid& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}

int main() {
	Cuboid c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "面积：" << c1.calArea() << endl;
	cout << "面积：" << c1.calVolume() << endl;

	Cuboid c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = g_judgeEqu(c1, c2);
	if (ret) {
		cout << "c1和c2相等" << endl;
	}
	else {
		cout << "c1和c2不等" << endl;
	}

	ret = c1.m_judgeEqu(c2);
	if (ret) {
		cout << "c1和c2相等" << endl;
	}
	else {
		cout << "c1和c2不等" << endl;
	}

	system("pause");
	return 0;
}