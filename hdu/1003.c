/*
 * =====================================================================================
 *
 *       Filename:  1003.c
 *
 *    Description:  
 *    Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.
 *    Input
 *    The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line starts with a number N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).
 *    Output
 *    For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line contains three integers, the Max Sum in the sequence, the start position of the sub-sequence, the end position of the sub-sequence. If there are more than one result, output the first one. Output a blank line between two cases.
 *    Sample Input
 *    2
 *    5 6 -1 5 4 -7
 *    7 0 6 -1 1 -6 7 -5
 *    Sample Output
 *    Case 1:
 *    14 1 4
 *    Case 2:
 *    7 1 6
 *
 *        Created:  03/09/2015 23:18:11
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
long max_sum(int a[],long n,long *start,long *end){
	long i,sum=a[0],tmp=0,x;
	*start=*end=x=0;
	for(i=0;i<n;++i){
		if(tmp>=0)
			tmp+=a[i];
		else{
			tmp=a[i];
			x=i;
		}
		if(sum<tmp){
			sum=tmp;
			*start=x;
			*end=i;
		}
	}
	return sum;
}
int main(){
	int t,cas,a[100010];
	long i,n,max,start,end;
	scanf("%d",&t);
	for(cas=1;cas<=t;++cas){
		scanf("%ld",&n);
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		max=max_sum(a,n,&start,&end);
		printf("Case %d:\n%ld %ld %ld\n%s",cas,max,start+1,end+1,(cas==t)?"":"\n");
	}
	return 0;
}
