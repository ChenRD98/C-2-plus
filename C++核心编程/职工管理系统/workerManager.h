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
	//标志文件是否为空
	bool m_FileIsEmpty;
	//统计人数
	int get_EmpNum();
	//初始化员工
	void init_Emp();
	//显示职工
	void Show_Emp();
	//删除职工
	void Del_Emp();
	//按照职工编号判断职工是否存在，若存在返回职工在数组中的位置，不存在返回-1
	int IsExist(int id);




	//记录文件中的人数个数
	int m_EmpNum;
	//员工数组的指针
	Worker** m_EmpArray;


	~workerManager();
};
