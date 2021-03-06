/*
 * =====================================================================================
 *
 *       Filename:  1267.c
 *
 *    Description:  
 *    假定一个字符串由m个H和n个D组成，从左到右扫描该串，如果字符H的累计数总是不小于字符D的累计数,那么，满足条件的字符串总数就恰好和下沙的沙粒一样多。
 *    Input
 *    输入数据包含多个测试实例，每个占一行，由两个整数m和n组成，m和 n 分别表示字符串中H和D的个数。由于我们目前所使用的微机和老美的超级计算机没法比，所以题目给定的数据范围是（1<=n<=m<=20）。
 *    Output
 *    对于每个测试实例，请输出下沙的沙粒到底有多少，计算规则请参考“宇春猜想”，每个实例的输出占一行。
 *    Sample Input
 *    1 1
 *    3 1
 *    Sample Output
 *    1
 *    3
 *
 *        Created:  02/23/2015 16:19:54
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,j,t,m,n;
	__int64 a[20][20];
	for(i=0;i<20;++i)
		for(j=2,a[i][0]=i+1,a[i][1]=(i+1)*(i+2)/2-1;j<=i;++j){
			if(i==j)
				a[i][j]=a[i][j-1];
			else
				a[i][j]=a[i][j-1]+a[i-1][j];
		}
	while(scanf("%d%d",&m,&n)!=EOF){
		if(m<n){
			t=m;
			m=n;
			n=t;
		}
		printf("%I64d\n",a[m-1][n-1]);
	}
	return 0;
}
