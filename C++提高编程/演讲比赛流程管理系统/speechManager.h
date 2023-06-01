#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"

//设计演讲管理类
class SpeechManager {
public:

	//构造函数
	SpeechManager();

    //展示菜单
    void show_Menu();

	//初始化属性
	void initSpeech();

	//退出功能
	void exitSystem();

	//析构函数
	~SpeechManager();


	//比赛选手 容器 12人
	vector<int>v1;

	//第一轮晋级容器 6人
	vector<int>v2;

	//胜利前三名容器 3人
	vector<int>vVictory;

	//存放编号 以及对应的 具体选手 容器
	map<int, Speaker> m_Speaker;

	//记录比赛轮数
	int m_Index;
};