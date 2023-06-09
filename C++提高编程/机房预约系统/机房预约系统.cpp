#include<iostream>
#include "showMenu.h"
using namespace std;

int main() {

	int select = 0;

	while (true) {
		showMenu();
		cin >> select;

		switch (select) {
		case 1:
			//学生
			break;
		case 2:
			//老师
			break;
		case 3:
			//管理员
			break;
		case 0:
			//退出
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}



	}

	system("pause");
	return 0;
}