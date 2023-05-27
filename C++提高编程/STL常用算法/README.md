# STL-常用算法
概述：  
 * 算法主要由头文件<algorithm> <functional> <numeric>组成  
 * <algorithm>是所有STL头文件中最大的一个，范围设计到比较、交换、查找、遍历操作、复制、修改等等  
 * <numeric>体积很小，只包括几个在序列上面进行简单数学运算的模板函数  
 * <functional>定义了一些模板类，用以声明函数对象  
  
## 常用遍历算法
算法简介：  
 * for_each //遍历容器  
 * transform //搬运容器到另一个容器中  
  
### for_each
 * for_each(iterator beg, iterator end, _func);  
 //遍历算法 遍历容器元素  
 //beg开始迭代器  
 //end结束迭代器  
 //_func函数或函数对象  
  
总结：for_each在实际开发中是最常用遍历算法，需要熟练掌握  
  
### transform
功能描述：搬运容器到另一个容器中  
函数原型：  
 * transform(iterator beg1, iterator beg2, _func);  
 //beg1源容器开始迭代器  
 //end1源容器结束迭代器  
 //beg2目标容器开始迭代器  
 //_func函数或函数对象  
  
## 常用查找算法
算法简介：  
 * find //查找元素  
 * find_if //按条件查找元素  
 * adjacent_find //查找相邻重复元素  
 * binary_search //二分查找法  
 * count //统计元素个数  
 * count_if //按条件统计元素个数  
  
### find
功能描述：  
 * 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()  
  
函数原型：  
 * find(iterator beg, iterator end, value);  
 //按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置  
 //beg开始迭代器  
 //end结束迭代器  
 //value查找的元素  
  
### find_if
功能描述：  
 * 按条件查找元素  
  
函数原型：  
 *find_if(iterator beg, iterator end, _Pred);  
 //按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置  
 //beg开始迭代器  
 //end结束迭代器  
 //_Pred函数或者谓词（返回bool类型的仿函数）  
  
### adjacent_find
功能描述：  
 * 查找相邻重复元素  
  
函数原型：  
 *adjacent_find(iterator beg, iterator end);  
 //查找相邻重复元素，返回相邻元素的第一个位置的迭代器  
 //beg开始迭代器  
 //end结束迭代器  
  
总结：实际开发中少见，面试题中会出现  
  
### binary_search
功能描述：  
 * 查找指定元素是否存在  
  
函数原型：  
 * bool binary_search(iterator beg, iterator end, value);  
 //查找指定的元素，查到返回true，否则false  
 //注意：在**无序序列中不可使用**  
 //beg开始迭代器  
 //end结束迭代器  
 //value查找的元素  
  
### count
函数原型：  
 * count(iterator beg, iterator end, value);  
 //统计元素出现次数  
 //beg开始迭代器  
 //end结束迭代器  
 //value统计的元素  
  
