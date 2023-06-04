# 演讲比赛流程管理系统
## 演讲比赛程序需求
### 比赛规则
 * 学校举行一场演讲比赛，共有**12人**参加。**比赛共两轮**，第一轮为淘汰赛，第二轮为决赛  
 * 每名选手都有对应的**编号**，如10001~10012  
 * 比赛方式：**分组比赛，每组6人**  
 * 第一轮分为两个小组，整体按照选手编号进行**抽签**后顺序演讲  
 * 十个评委分别给每名选手打分，去除最高分和最低分，求得平均分为本轮选手的成绩  
 * 当小组演讲完后，淘汰组内排名最后的三个选手，**前三名晋级**，进入下一轮的比赛  
 * 第二轮决赛，**前三名胜出**  
 * 每轮比赛过后需要**显示晋级选手的信息**  
  
### 程序功能
 * 开始演讲比赛：完成整届比赛的流程，每个比赛阶段需要给用户一个提示，用户按任意键后继续下一阶段  
 * 查看往届记录：查看之前比赛前三名结果，每次比赛都会记录到文件中，文件用.csv后缀名保存  
 * 清空比赛记录：将文件中数据清空  
 * 退出比赛程序：可以退出当前程序  
  
## 项目创建
## 创建管理类
功能描述：  
 * 提供菜单界面与用户交互  
 * 对演讲比赛流程进行控制  
 * 与文件的读写交互  
  
### 创建文件
 * 在头文件和源文件的文件夹下分别创建speechManager.h和 speechManager.cpp文件  
  
## 菜单功能
### 添加成员函数
在管理类speechManager.h中添加成员函数 void show_Menu();  
  
### 菜单功能实现
在管理类speechManager.cpp中实现show_Mennu()函数  
  
### 测试菜单功能
在演讲比赛流程管理系统.cpp中测试菜单功能  
  
## 退出功能
### 提供功能接口
在main函数中提供分支选择，提供每个功能接口  
  
### 实现退出功能
在speechManager.h中提供退出系统的成员函数 void exitSystem();  
在speechManager.cpp中提供具体的功能实现  
  
### 测试功能
在main函数分支0选项中，调用退出程序的接口  
  
## 演讲比赛功能
### 功能分析
比赛流程分析：  
抽签->开始演讲比赛->显示第一轮比赛结果->  
抽签->开始演讲比赛->显示前三名结果->保存分数  
  
### 创建选手类
 * 选手类中的属性包含：选手姓名，分数  
 * 头文件中包含sppeaker.h文件，并添加代码  
  
### 比赛
#### 成员属性添加
 * 在speechManager.h中添加属性  
  
#### 初始化属性
 * 在speechManager.h中提供开始比赛的成员函数 void initSpeech();  
 * 在speechManager.cpp中实现 void initSpeech();  
 * SpeechManager构造函数中调用 void initSpeech();  
  
#### 创建选手
 * 在speechManager.h中提供开始比赛的成员函数 void createSpeaker();  
 * speechManager.cpp中实现 void createSpeaker();  
 * SpeechManager类的构造函数中调用 void createSpeaker();  
 * 测试 在main函数中，可以在创建完管理对象后，使用for循环代码遍历容器测试12名选手初始状态  
  
#### 开始比赛成员函数添加
 *在speechManager.h中提供开始比赛的成员函数 void startSpeech();  
 * 该函数功能是主要控制比赛的流程  
 * 在speechManager.cpp中将startSpeech的空实现先写入  
 * 我们可以先将整个比赛的流程 写到函数中  
  
#### 抽签
功能描述：  
 * 正式比赛前，所有选手的比赛顺序需要打乱，我们只需要将存放选手编号的容器 打乱次序即可  
 * 在speechManager.h中提供抽签的成员函数 void speechDraw();  
 * 在speechManager.cpp中实现成员函数 void speechDraw();  
 * 在startSpeech比赛流程控制的函数中，调用抽签函数  
 * 在main函数中，分支1选项中，调用开始比赛的接口  
  
#### 开始比赛
 * 在speechManager.h中提供比赛的成员函数 void speechContest();  
 * 在speechManager.cpp中实现成员函数 void speechContest();  
 * 在startSpeech比赛流程控制的函数中，调用比赛函数  
  
#### 显示比赛分数
 * 在speechManager.h中提供显示分数的成员函数 void showScore();  
 * 在speechManager.cpp中实现成员函数 void showScore();  
 * 在startSpeech比赛流程控制的函数中，调用显示比赛分数函数  
  
#### 第二轮比赛
第二轮比赛流程同第一轮，只是比赛的轮数+1，其余流程不变  
 * 在startSpeech比赛流程控制的函数中，加入第二轮的流程  
  
### 保存分数
功能描述：  
 * 将每次演讲比赛的得分记录到文件中  
  
功能实现：  
 * 在speechManager.h中添加保存记录的成员函数 void saveRecord();  
 * 在speechManager.cpp中实现成员函数 void saveRecord();  
 * 在startSpeech比赛流程控制的函数中，最后调用保存记录分数函数  
  
## 查看记录
### 读取记录分数
 * 在speechManager.h中添加读取记录的成员函数 void loadRecord();  
 * 添加判断文件是否为空的标志 bool fileIsEmpty;  
 * 添加往届记录的容器 map<int, vector<string>> m_Record;  
其中m_Record中的key代表第几届，value记录具体的信息  
 * 在speechManager.cpp中实现成员函数 void loadRecord();  
 * 在SpeechManager构造函数中调用获取往届记录函数  
  
### 查看记录功能
 * 在speechManager.h中添加展示记录的成员函数 void showRecord();  
 * 在speechManager.cpp中实现成员函数 void showRecord();  
  
### bug解决
目前程序中有几处ubug未解决：
 1、查看往届记录，若文件不存在或为空，并未提示  
解决方法：在showRecord函数中，开始判断文件状态并加以判断  
 2、若记录为空或不存在，比完赛后依然提示记录为空  
解决方法：saveRecord中更新文件为空的标志  
 3、比完赛后查不到本届比赛的记录，没有实时更新  
解决方法：比赛完毕后，所有数据重置  
 4、在初始化时，没有初始化记录容器  
解决方法：initSpeech中添加 初始化记录容器  
  
  