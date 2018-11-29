// data2txt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <stdio.h>

void main()
{
	FILE *p;
	char a[100]="ertdfdgg",i;
	if((p=fopen("F:\\data.txt","wt"))!=NULL)
		for(i=0;i<8;i++) //a数组只有 8个字符，循环到8 就是字符串结尾 
			fprintf(p,"%c",a[i]);// 这里写入的是字符 %s 改成 %c  
	fclose(p);
 
}
