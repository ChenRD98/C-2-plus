#include<iostream>
using namespace std;
#include<string>
//#include "Person.h"报错，链接不到，无法解析命令
//方式1：直接包含.cpp源文件
//#include "Person.cpp"
//方式2（常见）：将声明和实现写到同一文件中，并更改头文件后缀名为.hpp
//hpp是约定的名称，并不是强制
#include "Person.hpp"

void test01() {
	Person<string, int>p("张三", 20);
	p.showPerson();
}

int main() {
	test01();
	system("pause");
	return 0;
}