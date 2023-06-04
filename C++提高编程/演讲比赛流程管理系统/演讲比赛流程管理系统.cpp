#include<iostream>
using namespace std;
#include "speechManager.h"
#include<string>
#include<ctime>

int main() {
	srand((unsigned int)time(NULL));

	SpeechManager sm;

	//测试12名选手创建
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++) {
		cout << "选手编号：" << it->first << "姓名：" << it->second.m_Name << "分数：" << it->second.m_Score[0] << endl;

	}*/
    
	int choice = 0;

	while (true) {
		sm.show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice) {
		//开始比赛
		case 1:
			sm.startSpeech();
			break;

		//查看记录
		case 2:
			sm.showRecord();
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