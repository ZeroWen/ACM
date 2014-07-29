/*
 * =====================================================================================
 *
 *       Filename:  2037.c
 *
 *    Description:  
 *    Input
 *    输入数据包含多个测试实例，每个测试实例的第一行只有一个整数n(n<=100)，表示你喜欢看的节目的总数，然后是n行数据，每行包括两个数据Ti_s,Ti_e (1<=i<=n)，分别表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。n=0表示输入结束，不做处理。
 *    Output
 *    对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输出占一行。
 *    Sample Input
 *    12
 *    1 3
 *    3 4
 *    0 7
 *    3 8
 *    15 19
 *    15 20
 *    10 15
 *    8 18
 *    6 12
 *    5 10
 *    4 14
 *    2 9
 *    0
 *    Sample Output
 *    5
 *
 *    Created:  07/25/2014 15:12:18
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j,tmp,node,r,a[102][2];
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i][0],&a[i][1]);
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(a[i][1]>a[j][1]){
					tmp=a[i][0];
					a[i][0]=a[j][0];
					a[j][0]=tmp;
					tmp=a[i][1];
					a[i][1]=a[j][1];
					a[j][1]=tmp;
				}
		for(i=node=r=0;i<n;i++)
			if(node<=a[i][0]){
				node=a[i][1];
				++r;
			}
		printf("%d\n",r);
	}
	return 0;
}
