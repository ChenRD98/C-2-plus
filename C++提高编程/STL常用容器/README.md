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
 = 返回 0  
 > 返回 1  
 < 返回 -1  
  
函数原型：  
 * int compare(const string &s) const; //与字符串s比较  
 * int cmpare(const char *s) const; //与字符串s比较  
  
总结：字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义不大  
  
### string字符存取
string中单字符存取方式：  
 * char& operator[](int n); //通过[]方式取字符  
 * char& at(int n); //通过at方式获取字符  
  
### string插入和删除
函数原型：  
 * string& insert(int pos, const char* s); //插入字符串  
 * string& insert(int pos, const string& s); //插入字符串  
 * string& insert(int pos, int n, char c); //在指定位置插入n个字符c  
 * string& erase(int pos, int n = npos); //删除从Pos开始的n个字符  
  
### string子串
函数原型：  
 * string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串  
  
## vector容器
### vector基本概念
功能：  
 * vector数据结构和**数组非常相似**，也称为**单端数组**  
  
vector与普通数组区别：  
 * 不同之处在于数组是静态空间，而vector可以**动态扩展**  
  
动态扩展：  
 * 并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝到新空间，释放原空间  
 
 * vector容器的迭代器是支持随机访问的迭代器  
  
### vector构造函数
函数原型：  
 * vector<T> v; //采用模板实现类实现，默认构造函数  
 * vector(v.begin(), v.end()); //将v[begin(),end())区间内的元素拷贝给本身  
 * vector(n, elem); //构造函数将n个elem拷贝给本身  
 * vector(const vector &vec); //拷贝构造函数  
  