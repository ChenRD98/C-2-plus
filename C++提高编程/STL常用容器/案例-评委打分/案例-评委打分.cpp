#include<iostream>
using namespace std;
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<ctime>

class Person {
public:
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}
//private:
	string m_Name;
	int m_Score;
};

void createPerson(vector<Person>& v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		//将创建的person对象放入容器中
		v.push_back(p);
	}
}

void setScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//将评委的分数 放入deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;	//60~100
			d.push_back(score);
		}
		/*cout << "选手：" << it->m_Name << "打分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " ";
		}
		cout << endl;*/
		//去除最高分最低分
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;	//累加每个评委的分束
		}
		int avg = sum / d.size();
		//将平均分赋值给选手
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名：" << it->m_Name << "分数：" << it->m_Score << endl;
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建5名选手
	vector<Person>v;
	createPerson(v);
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << (*it).m_Name << " ";
		cout << (*it).m_Score << " ";
	}*/
	//打分
	setScore(v);
	//显示最后得分
	showScore(v);

	system("pause");
	return 0;
}