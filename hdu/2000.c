/*
 * =====================================================================================
 *
 *       Filename:  2000.c
 *
 *    Description:  
 *    Problem Description
 *    输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
 *    Input
 *    输入数据有多组，每组占一行，有三个字符组成，之间无空格。
 *
 *    Output
 *    对于每组输入数据，输出一行，字符中间用一个空格分开。
 *
 *    Sample Input
 *    qwe
 *    asd
 *    zxc
 *
 *    Sample Output
 *    e q w
 *    a d s
 *    c x z
 *
 *        Version:  1.0
 *        Created:  04/08/2014 21:33:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char str[4],t;
	int i,j;
	while(scanf("%s",str)!=EOF){
		for(i=0;i<3;i++)
			for(j=i+1;j<2-i;j++)
				if(str[j]>str[j+1]){
					t=str[j];
					str[j]=str[j+1];
					str[j+1]=t;
				}
		printf("%c %c %c\n",str[0],str[1],str[2]);
	}
	return 0;
}
