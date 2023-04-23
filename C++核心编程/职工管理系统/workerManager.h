#pragma once
#include<iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class workerManager {
public:
	workerManager();
	//展示菜单
	void Show_Menu();
	//退出系统
	void exitSystem();
	//增加职工
	void Add_Emp();
	//文件操作
	void save();






	//记录文件中的人数个数
	int m_EmpNum;
	//员工数组的指针
	Worker** m_EmpArray;


	~workerManager();
};
