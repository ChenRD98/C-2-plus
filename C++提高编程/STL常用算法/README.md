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
  

