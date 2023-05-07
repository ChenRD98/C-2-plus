# STL常用容器
## string容器
### string基本概念
本质：  
 * string是C++风格的字符串，而string本质上是一个类  
  
string和char*区别：
 * char* 是一个指针  
 * string是一个类，类内封装了char*，管理这个字符串，是一个char*型的容器  
  
特点：  
string类内部封装了很多成员函数  
例如：查找find，拷贝copy，删除delete，替换replace，插入insert  
string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责  
  
### string构造函数
构造函数原型：  
 * string(); //创建一个空的字符串 例如：string str；  
 * string(const char* s); //使用字符串s初始化  
 * string(const string& str); //拷贝构造，使用一个string对象初始化另一个string对象  
 * string(int n, char c); //使用n个字符c初始化  
  
### string赋值操作
赋值的函数原型：  
 * string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串  
 * string& operator=(const string &s); //把字符串s赋给当前的字符串  
 * string& operator=(char c); //字符赋给当前的字符串  
 * string& assign(const char* s); //把字符串s赋给当前的字符串  
 * string& assign(const char* s， int n); //把字符串s的前n个字符赋给当前的字符串  
 * string& assign(const string &s); //把字符串s赋给当前字符串  
 * string& assign(int n, char c); //用n个字符c赋给当前字符串  
  
### string字符串拼接
函数原型：  
 * string& operator+=(const char* str); //重载+=操作符  
 * string& operator+=(const char c);  
 * string& operator+=(const string& str);  
 * string& append(const char* s); //把字符串s连接到当前的字符串结尾  
 * string& append(const char* s， int n); //把字符串s的前n个字符连接到当前的字符串结尾  
 * string& append(const string &s); //同operator+=(const string& str)  
 * string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符c连接到当前字符串结尾  
  
### string查找和替换
函数原型：  
 * int find(const string& str, int pos = 0) const; //查找str第一次出现位置，从pos开始查找  
 * int find(const char* s, int pos = 0) const; //查找s第一次出现位置，从pos开始查找  
 * int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次出现位置  
 * int find(const char c, int pos = 0) const; //查找字符c第一次出现位置，从pos开始查找  
 * int rfind(const string& str, int pos = npos) const; //查找str最后一次出现位置，从pos开始查找  
 * int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置，从pos开始查找  
 * int rfind(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符最后一次出现位置  
 * int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置，从pos开始查找  
 * string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str  
 * string& replace(int pos, int n, const char* s); //替换从pos开始n个字符为字符串s  
总结：  
 * rfind从右往左查找，find从左往右找  
 * find找到后返回查找的第一个字符位置，找不到返回-1  
 * replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串  
  
### string字符串比较
比较方式：  
 * 字符串比较是按字符的ASCII码进行对比  
 