#include<iostream>
#include<string>
#include"showMenu.h"

using namespace std;

void showMenu();
void addPerson(struct Addressbooks* abs);
void showPerson(struct Addressbooks* abs);
int isExist(struct Addressbooks* abs, string name);
void deletePerson(struct Addressbooks* abs);
void findPerson(struct Addressbooks* abs);
void modifyPerson(struct Addressbooks* abs);
void cleanPerson(struct Addressbooks* abs);

//定义联系人结构体
struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Tel;
	string m_Addr;
};
//定义通讯录结构体
const int MAX = 1000;
struct Addressbooks {
	struct Person personArray[MAX];
	int m_Size;
};

int main() {
	//按键变量初始化
	int select = 0;
	//创建通讯录结构体变量
	struct Addressbooks abs;
	//初始化结构体变量
	abs.m_Size = 0;

	while (true) {
		//显示菜单界面
		showMenu();
		cin >> select;
		switch (select) {
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
		/*{
			cout << "请输入删除联系人姓名：" << endl;
			string name;
			cin >> name;
			cout << isExist(&abs, name) << endl;
			if (isExist(&abs, name) == -1) {
				cout << "查无此人" << endl;
			}
			else {
				cout << "找到此人" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}

void addPerson(Addressbooks* abs) {
	//判断通讯录是否已满，如果满了就不能添加
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		int sex;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男：" << endl;
		cout << "2 --- 女" << endl;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		string tel;
		cout << "请输入电话：" << endl;
		cin >> tel;
		abs->personArray[abs->m_Size].m_Tel = tel;

		string addr;
		cout << "请输入地址：" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause");	//请按任意键继续
		system("cls");		//清屏
	}
}
void showPerson(Addressbooks* abs) {
	if (abs->m_Size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Tel << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
//检测联系人是否存在，存在返回联系人所在数组中的位置，否则返回-1
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}
void deletePerson(struct Addressbooks* abs) {
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中人员数
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(struct Addressbooks* abs) {
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "找到此人，信息如下：" << endl;
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Tel << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(struct Addressbooks* abs) {
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男：" << endl;
		cout << "2 --- 女" << endl;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}

		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string tel;
		cout << "请输入电话：" << endl;
		cin >> tel;
		abs->personArray[ret].m_Tel = tel;

		string addr;
		cout << "请输入地址：" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(struct Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}