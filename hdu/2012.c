/*
 * =====================================================================================
 *
 *       Filename:  2012.c
 *
 *    Description:  
 *    Problem Description
 *    对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，判定该表达式的值是否都为素数。
 *    Input
 *    输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。
 *
 *    Output
 *    对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。
 *
 *    Sample Input
 *    0 1
 *    0 0
 *
 *    Sample Output
 *    OK
 *
 *        Version:  1.0
 *        Created:  04/08/2014 22:34:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int isPrime(int n){
	int i,sign=1;
	if(n==2)
		return 1;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return sign;
}
int main(){
	int x,y,t,i,sign;
	while(scanf("%d%d",&x,&y)!=EOF){
		if(x==0&&y==0)
			break;
		if(x>y){
			t=x;
			x=y;
			y=t;
		}
		for(i=x,sign=1;i<=y;i++)
			if(!isPrime(i*i+i+41)){
				sign=0;
				break;
			}
		if(sign)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
	return 0;
}
