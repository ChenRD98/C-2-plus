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
  
总结：统计自定义数据类型时，需要配合重载operator==  
  
### count_if
函数原型：  
 * count_if(iterator beg, iterator end, _Pred);  
 //按条件统计元素出现次数  
 //beg开始迭代器  
 //end结束迭代器  
 //_Pred函数或者谓词（返回bool类型的仿函数）  
  
## 常用排序算法
算法简介：  
 * sort //对容器内元素进行排序  
 * random_shuffle //洗牌 指定范围内的元素随机调整次序  
 * merge //容器元素合并，并存储到另一容器中  
 * reverse //反转指定范围的元素  
  
### sort
函数原型：  
 * sort(iterator beg, iterator end, _Pred);  
 //无谓词默认从小到大排序  
 //beg开始迭代器  
 //end结束迭代器  
 //_Pred函数或者谓词（返回bool类型的仿函数）  
  
### random_shuffle
功能描述：  
 * 洗牌 指定范围内的元素随机调整次序  
  
函数原型：  
 * random_shuffle(iterator beg, iterator end);  
 //指定范围内的元素随机调整次序  
 //beg开始迭代器  
 //end结束迭代器  
  
### merge
功能描述：  
 * 两个容器元素合并，并存储到另一个容器中  
  
函数原型：  
 * merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  
 //容器元素合并，并存储到另一容器中  
 //注意：两个容器必须是**有序的**  
 //beg1容器1开始迭代器  
 //end1容器1结束迭代器  
 //beg2容器2开始迭代器  
 //end2容器2结束迭代器  
 //dest目标容器开始迭代器  
  
### reverse
功能描述：  
 * 将容器内元素进行反转  
  
函数原型：  
 * reverse(iterator beg, iterator end);  
 //反转指定范围内元素  
 //beg开始迭代器  
 //end结束迭代器  
  
总结：面试题可能遇到，实际用途较少  
  
## 常用拷贝和替换算法
算法简介：  
 * copy //容器内指定范围的元素拷贝到另一容器中  
 * replace //将容器内指定范围的旧元素修改为新元素  
 * replace_if //容器内指定范围满足条件的元素替换为新元素  
 * swap //呼唤两个容器的元素  
  
### copy
功能描述：  
 * 容器内指定范围的元素拷贝到另一容器中  
  
函数原型：  
 * copy(iterator beg, iterator end, iterator dest);  
 //容器内指定范围的元素拷贝到目标容器中  
 //beg开始迭代器  
 //end结束迭代器  
 //dest目标容器开始迭代器  
  
### replace
功能描述：  
 * 将容器内指定范围的旧元素修改为新元素  
  
函数原型：  
 * replace(iterator beg, iterator end, oldvalue, newvalue);  
 //将区间内旧元素 替换成 新元素  
 //beg开始迭代器  
 //end结束迭代器  
 //oldvalue旧元素  
 //newvalue新元素  
  
### replace_if
功能描述：  
 * 容器内指定范围满足条件的元素替换为新元素  
  
函数原型：  
 * replace_if(iterator beg, iterator end, _Pred, newvalue);  
 //按条件替换元素，满足条件的替换成指定元素  
 //beg开始迭代器  
 //end结束迭代器  
 //_Pred谓词
 //newvalue新元素  
  
### swap
函数原型：  
 * swap(container c1, container c2);  
 //互换两个同种容器的元素  
 //c1容器1  
 //c2容器2  
  
## 常用算数生成算法
注意：  
 * 算术生成算法属于小型算法，使用时包含的头文件为#include<numeric>  
  
算法简介：  
 * accumulate //计算容器元素累计总和  
 * fill //向容器中添加元素  
  
### accumulate
功能描述：  
 * 计算容器元素累计总和  
  
函数原型：  
 * accumulate(iterator beg, iterator end, value);  
 //计算容器元素累计总和  
 //beg开始迭代器  
 //end结束迭代器  
 //value起始值  
  
### fill
功能描述：  
 * 向容器中填充元素  
  
函数原型：  
 * fill(iterator beg, iterator end, value);  
 //向容器中填充元素  
 //beg开始迭代器  
 //end结束迭代器  
 //value填充的值  
  
## 常用集合算法
算法简介：  
 * set_intersection //求两个容器的交集  
 * set_union //求两个容器的并集  
 * set_difference //求两个容器的差集  
  
### set_intersection
函数原型：  
 * set_intersection(iteration beg1, iteration end1, iteration beg2, iteration end2, iteration dest);  
 //求两个集合的交集  
 //**注意：两个集合必须是有序序列**  
 //beg1容器1开始迭代器  
 //end1容器1结束迭代器  
 //beg2容器2开始迭代器  
 //end2容器2结束迭代器  
 //dest目标容器开始迭代器  
  
总结：  
 * 目标容器开辟空间需要从**两个容器中取小值**  
 * set_intersection返回值既是交集中最后一个元素的位置  
  
### set_union
函数原型：  
 * set_union(iteration beg1, iteration end1, iteration beg2, iteration end2, iteration dest);  
 //求两个集合的并集  
 //**注意：两个集合必须是有序序列**  
 //beg1容器1开始迭代器  
 //end1容器1结束迭代器  
 //beg2容器2开始迭代器  
 //end2容器2结束迭代器  
 //dest目标容器开始迭代器  
  
