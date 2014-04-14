/*
 * =====================================================================================
 *
 *       Filename:  2113.c
 *
 *    Description:  
 *    Problem Description
 *    有一天, KIKI 收到一张奇怪的信, 信上要KIKI 计算出给定数各个位上数字为偶数的和.
 *    eg. 5548
 *    结果为12 , 等于 4 + 8
 *    KIKI 很苦恼. 想请你帮忙解决这个问题.
 *    Input
 *    输入数据有多组,每组占一行,只有一个数字,保证数字在INT范围内.
 *    Output
 *    对于每组输入数据,输出一行,每两组数据之间有一个空行.
 *    Sample Input
 *    415326
 *    3262
 *    Sample Output
 *    12
 *
 *    10
 *
 *        Version:  1.0
 *        Created:  04/14/2014 16:16:46
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
	char n[1000];
	int sign=1,s,d,i;
	while(scanf("%s",n)!=EOF){
		s=0;
		for(i=0;i<strlen(n);i++){
			d=n[i]-'0';
			if(d%2==0)
				s+=d;
		}
		if(sign)
			sign=0;
		else
			putchar('\n');
		printf("%d\n",s);
	}
	return 0;
}

//这输出格式太坑了！！！！！！！
//玩这种文字游戏
//垃圾题目！！！！！
