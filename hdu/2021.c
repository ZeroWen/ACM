/*
 * =====================================================================================
 *
 *       Filename:  2021.c
 *
 *    Description:  
 *    Problem Description
 *    作为杭电的老师，最盼望的日子就是每月的8号了，因为这一天是发工资的日子，养家糊口就靠它了，呵呵
 *    但是对于学校财务处的工作人员来说，这一天则是很忙碌的一天，财务处的小胡老师最近就在考虑一个问题：如果每个老师的工资额都知道，最少需要准备多少张人民币，才能在给每位老师发工资的时候都不用老师找零呢？
 *    这里假设老师的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。
 *    Input
 *    输入数据包含多个测试实例，每个测试实例的第一行是一个整数n（n<100），表示老师的人数，然后是n个老师的工资。
 *    n=0表示输入的结束，不做处理。
 *    Output
 *    对于每个测试实例输出一个整数x,表示至少需要准备的人民币张数。每个输出占一行。
 *    Sample Input
 *    3
 *    1 2 3
 *    0
 *    Sample Output
 *    4
 *
 *    Created:  07/09/2014 14:27:15
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int money_cal(long n){
	int x;
	for(x=0;n;++x){
		if(n>=100)
			n-=100;
		else if(n>=50)
			n-=50;
		else if(n>=10)
			n-=10;
		else if(n>=5)
			n-=5;
		else if(n>=2)
			n-=2;
		else
			--n;
	}
	return x;
}
int main(){
	int n,x;
	long tmp;
	while(scanf("%d",&n),n){
		x=0;
		while(n--){
			scanf("%ld",&tmp);
			x+=money_cal(tmp);
		}
		printf("%d\n",x);
	}
	return 0;
}
