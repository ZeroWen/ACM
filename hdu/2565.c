/*
 * =====================================================================================
 *
 *       Filename:  2565.c
 *
 *    Description:  
 *    Problem Description
 *    请你编程画一个放大的’X’。
 *    如3*3的’X’应如下所示：
 *    X X
 *    X
 *    X X
 *    5*5的’X’如下所示：
 *    X   X
 *     X X
 *      X
 *     X X
 *    X   X
 *    Input
 *    输入数据第一行是一个整数T，表示有T组测试数据；
 *    接下来有T行，每行有一个正奇数n（3 <= n <= 79），表示放大的规格。
 *    Output
 *    对于每一个n打印一个规格为n * n放大的’X’；每组输出后面空一行。
 *    Sample Input
 *    2
 *    3
 *    5 
 *    Sample Output
 *    X X
 *     X
 *    X X
 *
 *    X   X
 *     X X
 *      X
 *     X X
 *    X   X
 *
 *        Created:  05/13/2014 16:20:40
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
void draw(int n,int i){
	int j;
	for(j=0;j<i;j++)
		printf(" ");
	printf("X");
	for(j=0;j<n-2-2*i;j++)
		printf(" ");
	printf("X\n");
}
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n/2;i++)
			draw(n,i);	
		for(i=0;i<n/2;i++)
			printf(" ");
		printf("X\n");
		for(i=n/2-1;i>=0;i--)
			draw(n,i);
		printf("\n");
	}
	return 0;
}
