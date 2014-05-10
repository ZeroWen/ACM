/*
 * =====================================================================================
 *
 *       Filename:  1228.c
 *
 *    Description:  
 *    Problem Description
 *    读入两个小于100的正整数A和B,计算A+B.
 *    需要注意的是:A和B的每一位数字由对应的英文单词给出.
 *    Input
 *    测试输入包含若干测试用例,每个测试用例占一行,格式为"A + B =",相邻两字符串有一个空格间隔.当A和B同时为0时输入结束,相应的结果不要输出. 
 *    Output
 *    对每个测试用例输出1行,即A+B的值.
 *    Sample Input
 *    one + two =
 *    three four + five six =
 *    zero seven + eight nine =
 *    zero + zero =
 *    Sample Output
 *    3
 *    90
 *    96
 *
 *        Created:  05/10/2014 22:54:20
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int char2num(char *num){
	int t=0;
	if(!strcmp(num,"one"))
		t=1;
	else if(!strcmp(num,"two"))
		t=2;
	else if(!strcmp(num,"three"))
		t=3;
	else if(!strcmp(num,"four"))
		t=4;
	else if(!strcmp(num,"five"))
		t=5;
	else if(!strcmp(num,"six"))
		t=6;
	else if(!strcmp(num,"seven"))
		t=7;
	else if(!strcmp(num,"eight"))
		t=8;
	else if(!strcmp(num,"nine"))
		t=9;
	else if(!strcmp(num,"zero"))
		t=0;
	return t;
}
int main(){
	char c[100],num[10];
	int a,b,i,j;
	while(1){
		a=b=0;
		gets(c);
		for(i=0;c[i]!='+';i++){
			for(j=0;c[i]!=' ';i++,j++)
				num[j]=c[i];
			num[j]='\0';
			a=a*10+char2num(num);
		}
		for(i++;c[i]!='=';i++){
			for(j=0;c[i]!=' ';i++,j++)
				num[j]=c[i];
			num[j]='\0';
			b=b*10+char2num(num);
		}
		if(!a&&!b)
			break;
		printf("%d\n",a+b);
	}
	return 0;
}
