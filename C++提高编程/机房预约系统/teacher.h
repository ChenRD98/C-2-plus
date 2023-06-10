#pragma once
#include<iostream>
#include "identity.h"
using namespace std;

class Teacher :public Identity {
public:
	//默认构造
	Teacher();

	//有参构造（职工编号，姓名，密码）
	Teacher(int empId, string name, string pwd);

	//显示教师操作的菜单界面
	virtual void operMenu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void validOrder();

	//职工编号
	int m_EmpId;

};