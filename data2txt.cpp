// data2txt.cpp : �������̨Ӧ�ó������ڵ㡣
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
		for(i=0;i<8;i++) //a����ֻ�� 8���ַ���ѭ����8 �����ַ�����β 
			fprintf(p,"%c",a[i]);// ����д������ַ� %s �ĳ� %c  
	fclose(p);
 
}
