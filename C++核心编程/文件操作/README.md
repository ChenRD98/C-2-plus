# 文件操作
  
程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放  
通过**文件可以将数据持久化**  
C++中对文件操作需要包含头文件<fstream>  
  
文件类型分为两种：  
 1、**文本文件** - 文件以文本的**ASCII码**形式存储在计算机中  
 2、**二进制文件** - 文件以文本的**二进制**形式存储在计算机中，用户一般不能直接读懂它们  
  
操作文件的三大类：  
 1、ofstream：写操作  
 2、ifstream：读操作  
 3、fstream：读写操作  
  
## 文本文件
### 写文件
写文件步骤如下：  
 1、包含头文件  
 #include<fstream>  
 2、创建流对象  
 ofstream ofs;  
 3、打开文件  
 ofs.open("文件路径", 打开方式);  
 4、写数据  
 ofs << "写入的数据";  
 5、关闭文件  
 ofs.close();  
  
文件打开方式：  
<table border="2" >
	<tr>
		<th align=left>打开方式</th>
		<th colspan="2" >解释</th>
	</tr>
	<tr>
		<td width="30%" align=left><font color=red>ios::in</front></td>
		<td align=left bgcolor=#FFB6C1>为读文件而打开文件</td>
	</tr>
	<tr>
		<td align=left><font color=red>ios::out</front></td>
		<td align=left bgcolor=#D8BFD8>为写文件而打开文件</td>
	</tr>
	<tr>
		<td align=left>ios::ate</td>
		<td align=left bgcolor=#B0C4DE>初始位置：文件尾</td>
	</tr>
	<tr>
		<td align =left>ios::app</td>
		<td align=left bgcolor=#AFEEEE>追加方式写文件</td>
	</tr>
    <tr>
		<td width="30%" align=left>iOS::trunc</td>
		<td align=left bgcolor=#FFB6C1>如果文件存在先删除，再创建</td>
	</tr>
	<tr>
		<td align=left>ios::binary</td>
		<td align=left bgcolor=#D8BFD8>二进制方式</td>
	</tr>
</table>
  
**注意：**文件打开方式可以配合使用，利用|操作符  
**例如：**用二进制方式写文件 ios::binary | ios::out  
  
### 读文件
读文件与写文件步骤相似，但是读取方式相对比较多  
读文件步骤如下：  
 1、包含头文件  
 #include<fstream>  
 2、创建流对象  
 ifstream ifs;  
 3、打开文件并判断文件是否打开成功  
 ifs.open("文件路径", 打开方式);  
 ifs.is_open()返回bool类型结合if语句判断  
 &ensp;&ensp;if (!ifs.is_open()) {  
 &ensp;&ensp;&ensp;&ensp;cout << "文件打开失败" << endl;  
 &ensp;&ensp;&ensp;&ensp;return;  
 &ensp;&ensp;}  
 4、读数据  
 四种方式读取  
 * 创建空字符数组，将ifs中内容输出到空数组中，配合while循环打印读出效果  
 * 创建空字符数组，利用ifs成员函数getline(char*空字符数组名即为首地址, 计数大小sizeof)，配合while实现读取  
 * 创建字符串变量，利用全局函数getline(输入流对象, 准备好的字符串变量)，该全局函数需要包含string头文件，配合while实现读取  
 * 创建空字符变量，利用ifs成员函数get，ifs.get()一次只能读一个字符，放入c中，while循环判断是否读到文件尾EOF(不推荐)  
 while ((c = ifs.get()) != EOF) {cout << c;}  
  
 5、关闭文件  
 ifs.close();  
  
## 二进制文件
以二进制方式对文件进行读写操作  
打开方式要指定为 ios::binary  
  
### 写文件
二进制方式写文件主要利用流对象调用成员函数write  
函数原型：ostream& write(const char* buffer, int len);  
参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数  
  
### 读文件
二进制方式读文件主要利用流对象调用成员函数read  
函数原型：ostream& read(char* buffer, int len);  
参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数  
  