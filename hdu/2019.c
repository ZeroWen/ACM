/*
 * =====================================================================================
 *
 *       Filename:  2019.c
 *
 *    Description:  
 *    Problem Description
 *    有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
 *    Input
 *    输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。
 *    Output
 *    对于每个测试实例，输出插入新的元素后的数列。
 *    Sample Input
 *    3 3
 *    1 2 4
 *    0 0
 *    Sample Output
 *    1 2 3 4
 *
 *        Version:  1.0
 *        Created:  04/09/2014 23:36:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,x,i,a[100],p;
	while(scanf("%d%d",&n,&x)!=EOF){
		if(n==0&&x==0)
			break;
		for(i=0,p=n-1;i<n;i++){
			scanf("%d",&a[i]);
			if(x<a[i]&&p==n-1)
				p=i;
		}
		for(i=n-1;i>=p;i--)
			a[i+1]=a[i];
		a[p]=x;
		for(i=0;i<n+1;i++)
			printf("%d%s",a[i],(i==n)?"\n":" ");
	}
	return 0;
}
