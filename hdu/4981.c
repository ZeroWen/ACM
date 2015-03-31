/*
 * =====================================================================================
 *
 *       Filename:  4981.c
 *
 *    Description:  
 *    A median in a sequence with the length of n is an element which occupies position number ⌊n+12⌋ after we sort the elements in the non-decreasing order (the elements are numbered starting with 1). A median of an array (2, 6, 1, 2, 3) is the number 2, and a median of array (0, 96, 17, 23) — the number 17.
 *    An average of a sequence is the sum of sequence divided the size of the sequence.
 *    Goffi likes median very much and he hates average number. So if a sequence's average number is larger than or equal to the median of sequence, Goffi will hate the sequence. Otherwise, Goffi will like it.
 *    Now, your are given a sequence. Please find whether Goffi will like it or hate it.
 *    Input
 *    Input contains multiple test cases (less than 100). For each test case, the first line contains an integer n (1≤n≤1000), indicating the size of the sequence. Then in the next line, there are n integers a1,a2,…,an (1≤ai≤1000), seperated by one space.
 *    Output
 *    For each case, if Goffi like the sequence, output "YES" in a line. Otherwise, output "NO".
 *    Sample Input
 *    5
 *    1 2 3 4 5
 *    4
 *    1 5 6 6
 *    Sample Output
 *    NO
 *    YES
 *
 *        Created:  03/31/2015 21:16:46
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
	int i,n,a[1010];
	float sum;
	while(scanf("%d",&n)!=EOF){
		for(i=0,sum=0;i<n;++i){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		sum/=n;
		qsort(a,n,sizeof(int),cmp);
		printf("%s\n",(sum>=a[(int)(n-0.5)/2])?"NO":"YES");
	}
	return 0;
}
