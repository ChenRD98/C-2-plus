#pragma once
#include<iostream>
#include"identity.h"
using namespace std;
#include<fstream>
#include "globalFile.h"
#include<vector>
#include "student.h"
#include "teacher.h"

class Manager :public Identity {
public:
	//默认构造
	Manager();

	//有参构造
	Manager(string name, string pwd);

	//显示管理员操作菜单
	virtual void operMenu();

	//添加账号
	void addPerson();

	//查看账号
	void showPerson();

	//查看机房信息
	void showComputer();

	//清空预约记录
	void cleanFile();

	//初始化容器
	void initVector();

	//学生容器
	vector<Student> vStu;

	//老师容器
	vector<Teacher> vTea;
};