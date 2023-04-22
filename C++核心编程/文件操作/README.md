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
  
