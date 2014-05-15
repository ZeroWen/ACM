/*
 * =====================================================================================
 *
 *       Filename:  2191.c
 *
 *    Description:  
 *    Input
 *    输入数据首先包含一个正整数C，表示有C组测试用例，每组测试用例的第一行是两个整数n和m(1<=n<=100, 1<=m<=100),分别表示经费的金额和大米的种类，然后是m行数据，每行包含3个数p，h和c(1<=p<=20,1<=h<=200,1<=c<=20)，分别表示每袋的价格、每袋的重量以及对应种类大米的袋数。
 *    Output
 *    对于每组测试数据，请输出能够购买大米的最多重量，你可以假设经费买不光所有的大米，并且经费你可以不用完。每个实例的输出占一行。
 *    Sample Input
 *    1
 *    8 2
 *    2 100 4
 *    4 100 2
 *    Sample Output
 *    400
 *
 *        Created:  05/15/2014 13:29:18
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define max(a,b) a>b?a:b
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int i,j,n,k,m,p[105],h[105],c[105],f[105]={0};
		scanf("%d%d",&n,&m);
		for (i=1;i<=m;i++)
			scanf("%d%d%d",&p[i],&h[i],&c[i]);
		for (i=1;i<=m;i++)
			for(k=1;k<=c[i];k++)
				for (j=n;j>=p[i];j--)
					f[j]=max(f[j-p[i]]+h[i],f[j]);
		printf("%d\n",f[n]);
	}
	return 0;
}
