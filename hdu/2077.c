/*
 * =====================================================================================
 *
 *       Filename:  2077.c
 *
 *    Description:  
 *    Problem Description
 *    还记得汉诺塔III吗？他的规则是这样的：不允许直接从最左(右)边移到最右(左)边(每次移动一定是移到中间杆或从中间移出)，也不允许大盘放到小盘的上面。xhd在想如果我们允许最大的盘子放到最上面会怎么样呢？（只允许最大的放在最上面）当然最后需要的结果是盘子从小到大排在最右边。
 *    Input
 *    输入数据的第一行是一个数据T，表示有T组数据。
 *    每组数据有一个正整数n(1 <= n <= 20)，表示有n个盘子。
 *    Output
 *    对于每组输入数据，最少需要的摆放次数。
 *    Sample Input
 *    2
 *    1
 *    10
 *    Sample Output
 *    2
 *    19684
 *
 *        Created:  04/19/2014 07:26:26
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i;
	__int64 a[19],b[20];
	a[0]=1;
	b[0]=2;
	for(i=1;i<19;i++)
		a[i]=3*a[i-1]+1;
	for(i=1;i<20;i++)
		b[i]=2*a[i-1]+2;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d",&n);
			printf("%I64d\n",b[n-1]);
		}
	return 0;
}
