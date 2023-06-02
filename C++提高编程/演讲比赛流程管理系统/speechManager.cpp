#include "speechManager.h"

//构造函数
SpeechManager::SpeechManager() {
	//初始化属性
	this->initSpeech();

    //创建选手
	this->createSpeaker();
}

//展示菜单
void show_Menu() {
    cout << "**************************" << endl;
	cout << "**** 欢迎参加演讲比赛 ****" << endl;
	cout << "***** 1.开始演讲比赛 *****" << endl;
	cout << "***** 2.查看往届记录 *****" << endl;
	cout << "***** 3.清空比赛记录 *****" << endl;
	cout << "***** 0.退出比赛程序 *****" << endl;
	cout << "**************************" << endl;
	cout << endl;
}

//初始化属性
void SpeechManager::initSpeech() {
	//容器保证为空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	//初始化比赛轮数
	this->m_Index = 1;
}

//初始化创建12名选手
void SpeechManager::createSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++) {
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		//初始化分数
		for (int i = 0; i < 2; i++) {
			sp.m_Score[i] = 0;
		}

		//12名选手编号
		this->v1.push_back(i + 10001);

		//选手编号 以及对应的选手 存放到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//开始比赛 - 比赛流程控制
void SpeechManager::startSpeech() {
	//第一轮比赛
	//1、抽签
	this->speechDraw();

	//2、比赛

	//3、显示晋级结果

	//第二轮比赛

	//1、抽签

	//2、比赛

	//3、显示晋级结果

	//4、保存分数


}

//抽签
void SpeechManager::speechDraw() {
	cout << "第 << " << this->m_Index << " >> 轮比赛选手正在抽签" << endl;
	cout << "-----------------------------" << endl;
	cout << "抽签后演讲顺序如下： " << endl;

	if (this->m_Index == 1) {
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	else {
		//第二轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;
	system("pause");
	cout << endl;
}

//比赛
void SpeechManager::speechContest() {

}


//退出功能
void SpeechManager::exitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//析构函数
SpeechManager::~SpeechManager() {

}

