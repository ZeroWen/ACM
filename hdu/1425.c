/*
 * =====================================================================================
 *
 *       Filename:  1425.c
 *
 *    Description:  
 *    Problem Description
 *    给你n个整数，请按从大到小的顺序输出其中前m大的数。
 *    Input
 *    每组测试数据有两行，第一行有两个数n,m(0<n,m<1000000)，第二行包含n个各不相同，且都处于区间[-500000,500000]的整数。
 *    Output
 *    对每组测试数据按从大到小的顺序输出前m大的数。
 *    Sample Input
 *    5 3
 *    3 -35 92 213 -644
 *    Sample Output
 *    213 92 3
 *
 *        Created:  04/24/2014 22:29:29
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
int num[1000010];
int cmp(const void *_a,const void *_b){
	int *a=(int *)_a;
	int *b=(int *)_b;
	return *b-*a;
}
int main(){
	int n,m,i;
	while(scanf("%d %d",&n,&m)>0){
		for(i=0;i<n;i++)
			scanf("%d",&num[i]);
		qsort(num,n,sizeof(int),cmp);
		for(i=0;i<m;i++)
			if(i)
				printf(" %d",num[i]);
			else
				printf("%d",num[i]);
		printf("\n");
	}
	return 0;
}
