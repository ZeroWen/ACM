/*
 * =====================================================================================
 *
 *       Filename:  2029.c
 *
 *    Description:  
 *    Problem Description
 *    “回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
 *    Input
 *    输入包含多个测试实例，输入数据的第一行是一个正整数n,表示测试实例的个数，后面紧跟着是n个字符串。
 *    Output
 *    如果一个字符串是回文串，则输出"yes",否则输出"no".
 *    Sample Input
 *    4
 *    level
 *    abcde
 *    noon
 *    haha
 *    Sample Output
 *    yes
 *    no
 *    yes
 *    no
 *
 *        Version:  1.0
 *        Created:  04/14/2014 12:51:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int n,i,sign;
	char str[30000];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%s",str);
			for(i=0,sign=1;i<strlen(str)/2;i++)
				if(str[i]!=str[strlen(str)-1-i]){
					sign=0;
					break;
				}
			printf("%s\n",sign?"yes":"no");
		}
	return 0;
}
