/*
 * =====================================================================================
 *
 *       Filename:  3361.c
 *
 *    Description:  
 *    Problem Description
 *    古希腊数学家毕达哥拉斯在自然数研究中发现，220的所有真约数(即不是自身的约数)之和为： 
 *    1+2+4+5+10+11+20+22+44+55+110＝284。 
 *    而284的所有真约数为1、2、4、71、 142，加起来恰好为220。人们对这样的数感到很惊奇，并称之为亲和数。一般地讲，如果两个数中任何一个数都是另一个数的真约数之和，则这两个数就是亲和数。 
 *    你的任务就编写一个程序，判断给定的两个数是否是亲和数
 *    Input
 *    输入数据第一行包含一个数M，接下有M行，每行一个实例,包含两个整数A,B； 其中 0 <= A,B <= 600000 ;
 *    Output
 *    对于每个测试实例，如果A和B是亲和数的话输出YES，否则输出NO。
 *    Sample Input
 *    2
 *    220 284
 *    100 200
 *    Sample Output
 *    YES
 *    NO
 *
 *        Version:  1.0
 *        Created:  04/15/2014 17:36:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
long foo(long n){
	long i=1,sum=0;
	for(;i<n;i++)
		if(n%i==0)
			sum+=i;
	return sum;
}
int main(){
	int m;
	long a,b;
	while(scanf("%d",&m)!=EOF)
		while(m--){
			scanf("%ld%ld",&a,&b);
			if(a==foo(b)&&b==foo(a))
				printf("YES\n");
			else
				printf("NO\n");
		}
	return 0;
}
