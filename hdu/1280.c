/*
 * =====================================================================================
 *
 *       Filename:  1280.c
 *
 *    Description:  
 *    还记得Gardon给小希布置的那个作业么？（上次比赛的1005）其实小希已经找回了原来的那张数表，现在她想确认一下她的答案是否正确，但是整个的答案是很庞大的表，小希只想让你把答案中最大的M个数告诉她就可以了。
 *    给定一个包含N(N<=3000)个正整数的序列，每个数不超过5000，对它们两两相加得到的N*(N-1)/2个和，求出其中前M大的数(M<=1000)并按从大到小的顺序排列。
 *    Input
 *    输入可能包含多组数据，其中每组数据包括两行：
 *    第一行两个数N和M，
 *    第二行N个数，表示该序列。
 *    Output
 *    对于输入的每组数据，输出M个数，表示结果。输出应当按照从大到小的顺序排列。
 *    Sample Input
 *    4 4
 *    1 2 3 4
 *    4 5
 *    5 3 6 4
 *    Sample Output
 *    7 6 5 5
 *    11 10 9 9 8
 *
 *        Created:  02/17/2015 16:26:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p1,const void *p2){
	return ((*(int *)p1)<(*(int *)p2)?1:-1);
}
int b[1000001];
int main(){
	int m,n,a[3000],i,j,k;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		for(i=k=0;i<m;++i)
			for(j=i+1;j<m;++j){
				b[++k]=a[i]+a[j];
			}
		qsort(b,k,sizeof(int),cmp);
		for(i=0;i<m;++i)
			printf("%d%c",b[i],(i==(m-1))?'\n':' ');
	}
	return 0;
}
