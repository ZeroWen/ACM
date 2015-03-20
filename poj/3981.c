/*
 * =====================================================================================
 *
 *       Filename:  3981.c
 *
 *    Description:  
 *    编写一个C程序实现将字符串中的所有"you"替换成"we"
 *    Input
 *    输入包含多行数据
 *    每行数据是一个字符串，长度不超过1000
 *    数据以EOF结束
 *    Output
 *    对于输入的每一行，输出替换后的字符串
 *    Sample Input
 *    you are what you do
 *    Sample Output
 *    we are what we do
 *
 *        Created:  03/20/2015 22:59:13
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
char str[1010],tmp[1010];
int main(){
	while(gets(str)){
		int i,j,len=strlen(str);
		for(i=j=0;i<len+1;++i){
			if((i<len-1)&&str[i]=='y'&&str[i+1]=='o'&&str[i+2]=='u'){
				i+=2;
				tmp[j++]='w';
				tmp[j++]='e';
			}
			else
				tmp[j++]=str[i];
		}
		printf("%s\n",tmp);
	}
	return 0;
}
