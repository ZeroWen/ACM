/*
 * =====================================================================================
 *
 *       Filename:  2562.c
 *
 *    Description:  
 *    Problem Description
 *    给定一个长度为偶数位的0,1字符串，请编程实现串的奇偶位互换。
 *    Input
 *    输入包含多组测试数据；
 *    输入的第一行是一个整数C，表示有C测试数据；
 *    接下来是C组测试数据，每组数据输入均为0,1字符串，保证串长为偶数位(串长<=50)。
 *    Output
 *    请为每组测试数据输出奇偶位互换后的结果；
 *    每组输出占一行。
 *    Sample Input
 *    2
 *    0110
 *    1100
 *    Sample Output
 *    1001
 *    1100
 *
 *        Created:  04/16/2014 22:13:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int c,i;
	char str[51],t;
	while(scanf("%d",&c)!=EOF)
		while(c--){
			scanf("%s",str);
			for(i=0;str[i]!='\0';i+=2){
				t=str[i];
				str[i]=str[i+1];
				str[i+1]=t;
			}
			printf("%s\n",str);
		}
	return 0;
}
