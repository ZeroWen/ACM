/*
 * =====================================================================================
 *
 *       Filename:  2017.c
 *
 *    Description:  
 *    Problem Description
 *    对于给定的一个字符串，统计其中数字字符出现的次数。
 *    Input
 *    输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。
 *    
 *    Output
 *    对于每个测试实例，输出该串中数值的个数，每个输出占一行。
 *
 *    Sample Input
 *    2
 *    asdfasdf123123asdfasdf
 *    asdf111111111asdfasdfasdf
 *
 *    Sample Output
 *    6
 *    9
 *    
 *
 *        Version:  1.0
 *        Created:  04/08/2014 23:40:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,digit;
	char c;
	while(scanf("%d",&n)!=EOF){
		getchar();//接收回车键
		while(n--){
			digit=0;
			while((c=getchar())!='\n')
				if(c>='0'&&c<='9')
					digit++;
			printf("%d\n",digit);
		}
	}
	return 0;
}
