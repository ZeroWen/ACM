/*
 * =====================================================================================
 *
 *       Filename:  2098.c
 *
 *    Description:  
 *    Problem Description
 *    把一个偶数拆成两个不同素数的和，有几种拆法呢？
 *    Input
 *    输入包含一些正的偶数，其值不会超过10000，个数不会超过500，若遇0，则结束。
 *    Output
 *    对应每个偶数，输出其拆成不同素数的个数，每个结果占一行。
 *    Sample Input
 *    30
 *    26
 *    0
 *    Sample Output
 *    3
 *    2
 *
 *    Created:  07/09/14 20:20:12
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int n,i,j,k,x,tmp,a[1500]={2,3,5,7};
	for(i=4,j=11;j<10000;j++){
		tmp=sqrt(j);
		for(k=2;k<tmp+1;k++)
			if(j%k==0)
				break;
		if(k==tmp+1)
			a[i++]=j;
	}
	while(scanf("%d",&n),n){
		for(x=i=0;a[i]<n/2;i++){
			for(j=i+1;a[j]<n-a[i];j++);
			if(a[j]==n-a[i])
				++x;
		}
		printf("%d\n",x);
	}
	return 0;
}
