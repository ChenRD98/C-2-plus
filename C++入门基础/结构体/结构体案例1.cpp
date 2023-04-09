#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Student {
    string name;
    int score;
};
struct Teacher {
    string name;
    struct Student sArray[5];
};

//给老师和学生赋值函数
void allocateSpace(struct Teacher tArray[], int len) {
    string nameSeed = "ABCDE";
    //给老师赋值
    for (int i = 0; i < len; i++) {
        tArray[i].name = "Teacher_";
        tArray[i].name += nameSeed[i];

        //给每个学生赋值
        for (int j = 0; j < 5; j++) {
            tArray[i].sArray[j].name = "Student_";
            tArray[i].sArray[j].name += nameSeed[j];

            int random = rand() % 61 + 40;  //40~100
            tArray[i].sArray[j].score = random;
        }
    }
}

void printInfo(struct Teacher tArray[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "老师姓名：" << tArray[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t学生姓名：" << tArray[i].sArray[j].name
            << "学生分数：" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main() {
    //随机种子
    srand((unsigned int)time(NULL));

    struct Teacher tArray[3];

    int len = sizeof(tArray)/sizeof(tArray[0]);

    allocateSpace(tArray, len);
    printInfo(tArray, len);

    system("pause");
    return 0;
}