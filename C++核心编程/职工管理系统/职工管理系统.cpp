#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//void test() {
//	Worker* worker = NULL;
//	worker = new Employee(1, "张三", 1);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Manager(2, "李三", 2);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Boss(3, "王三", 3);
//	worker->showInfo();
//	delete worker;
//}

int main() {
	workerManager wm;
	int choice = 0;
	while (true) {
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice) {
		case 0:
			//退出系统
			wm.exitSystem();
			break;
		case 1:
			//增加职工
			wm.Add_Emp();
			break;
		case 2:
			//显示职工
			wm.Show_Emp();
			break;
		case 3:
			//删除职工
			wm.Del_Emp();
			break;
		case 4:
			//修改职工
			wm.Mod_Emp();
			break;
		case 5:
			//查找职工
			wm.Find_Emp();
			break;
		case 6:
			//排序职工
			break;
		case 7:
			//清空

			break;
		default:
			system("cls");
			break;
		}
	}
	//test();
	system("pause");
	return 0;
}