#include <stdio.h>
/* 文件的分类，在C语言中，文件分为两类
	磁盘文件
指一组相关数据的有序集合,通常存储在外部介质(如磁盘)上，使用时才调入内存。

	设备文件
在操作系统中把每一个与主机相连的输入、输出设备看作是一个文件，把它们的输入、
输出等同于对磁盘文件的读和写。
*/

int main(void)
{
    //定义文件指针 stdio.h中有关于FILE的结构体定义
	FILE *fp = NULL;

	// "\\"这样的路径形式，只能在windows使用
	// "/"这样的路径形式，windows和linux平台下都可用，建议使用这种
	// 路径可以是相对路径，也可是绝对路径
	fp = fopen("../test", "w");
	//fp = fopen("..\\test", "w");

	if (fp == NULL) //返回空，说明打开失败
	{
		//perror()是标准出错打印函数，能打印调用库函数出错原因
		perror("open");
		return -1;
	}

    //关闭文件
    fclose(fp);
	return 0;
}
