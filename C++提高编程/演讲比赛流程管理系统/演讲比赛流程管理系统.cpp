#include<iostream>
using namespace std;
#include "speechManager.h"

int main() {
	SpeechManager sm;

	int choice = 0;

	while (true) {
		sm.show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice) {
		//开始比赛
		case 1:
			break;

		//查看记录
		case 2:
			break;

		//清空记录
		case 3:
			break;

		//退出系统
		case 0:
			sm.exitSystem();
			break;

		//清屏
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}