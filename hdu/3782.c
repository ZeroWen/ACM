/*
 * =====================================================================================
 *
 *       Filename:  3782.c
 *
 *    Description:  
 *    Problem Description
 *    对于一个数n，如果是偶数，就把n砍掉一半；如果是奇数，把n变成 3*n+ 1后砍掉一半，直到该数变为1为止。
 *    请计算需要经过几步才能将n变到1，具体可见样例。
 *    Input
 *    测试包含多个用例，每个用例包含一个整数n,当n为0 时表示输入结束。（1<=n<=10000）
 *    Output
 *    对于每组测试用例请输出一个数，表示需要经过的步数,每组输出占一行。
 *    Sample Input
 *    3
 *    1
 *    0
 *    Sample Output
 *    5
 *    0
 *
 *        Created:  05/06/2014 00:11:14
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n),n){
		for(i=0;n!=1;n/=2,i++)
			if(n%2)
				n=3*n+1;
		printf("%d\n",i);
	}
	return 0;
}
