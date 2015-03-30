/*
 * =====================================================================================
 *
 *       Filename:  2673.c
 *
 *    Description:  
 *    Acmer in HDU-ACM team are ambitious, especially shǎ崽, he can spend time in Internet bar doing problems overnight. So many girls want to meet and Orz him. But Orz him is not that easy.You must solve this problem first.
 *    The problem is :
 *    Give you a sequence of distinct integers, choose numbers as following : first choose the biggest, then smallest, then second biggest, second smallest etc. Until all the numbers was chosen .
 *    For example, give you 1 2 3 4 5, you should output 5 1 4 2 3
 *    Input
 *    There are multiple test cases, each case begins with one integer N(1 <= N <= 10000), following N distinct integers.
 *    Output
 *    Output a sequence of distinct integers described above.
 *    Sample Input
 *    5
 *    1 2 3 4 5
 *    Sample Output
 *    5 1 4 2 3
 *
 *        Created:  03/30/2015 20:25:41
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)a-*(int *)b;
}
int main(){
	int i,n,a[10010];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),cmp);
		for(i=0;i<n/2+1;++i){
			if(n-1-i!=i)
				printf("%d %d%s",a[n-1-i],a[i],(n-2==2*i)?"\n":" ");
			else
				printf("%d\n",a[i]);
			if(n-2==2*i||n-1==2*i)
				break;
		}
	}
	return 0;
}
