/*
 * =====================================================================================
 *
 *       Filename:  1715.c
 *
 *    Description:  
 *    Problem Description
 *    Fibonacci数列，定义如下：
 *    f(1)=f(2)=1
 *    f(n)=f(n-1)+f(n-2) n>=3。
 *    计算第n项Fibonacci数值。
 *    Input
 *    输入第一行为一个整数N，接下来N行为整数Pi（1<=Pi<=1000）。
 *    Output
 *    输出为N行，每行为对应的f(Pi)。
 *    Sample Input
 *    5
 *    1
 *    2
 *    3
 *    4
 *    5
 *    Sample Output
 *    1
 *    1
 *    2
 *    3
 *    5
 *
 *        Created:  06/19/2014 12:26:28
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,p,fib[1000][220],up,i,j;
	for(i=0;i<1000;i++)
		for(j=0;j<220;j++)
			fib[i][j]=0;
	fib[0][0]=fib[1][0]=1;
	for(i=2;i<1000;i++){
		j=up=0;
		while(j<220){
			fib[i][j]=fib[i-1][j]+fib[i-2][j]+up;
			up=fib[i][j]/10;
			fib[i][j]%=10;
			++j;
		}
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d",&p);
		for(i=219;fib[p-1][i]==0;--i);
		for(;i>=0;i--){
			printf("%d",fib[p-1][i]);
		}
		putchar('\n');
	}
	return 0;
}

