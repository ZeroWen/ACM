/*
 * =====================================================================================
 *
 *       Filename:  5146.c
 *
 *    Description:  
 *    Today we have a number sequence A includes n elements.
 *    Nero thinks a number sequence A is good only if the sum of its elements with odd index equals to the sum of its elements with even index and this sequence is not a palindrome.
 *    Palindrome means no matter we read the sequence from head to tail or from tail to head,we get the same sequence.
 *    Two sequence A and B are consider different if the length of A is different from the length of B or there exists an index i that Ai≠Bi.
 *    Now,give you the sequence A,check out it’s good or not.
 *    Input
 *    The first line contains a single integer T,indicating the number of test cases.
 *    Each test case begins with a line contains an integer n,the length of sequence A.
 *    The next line follows n integers A1,A2,…,An.
 *    [Technical Specification]
 *    1 <= T <= 100
 *    1 <= n <= 1000
 *    0 <= Ai <= 1000000
 *    Output
 *    For each case output one line,if the sequence is good ,output "Yes",otherwise output "No".
 *    Sample Input
 *    3
 *    7
 *    1 2 3 4 5 6 7
 *    7
 *    1 2 3 5 4 7 6
 *    6
 *    1 2 3 3 2 1
 *    Sample Output
 *    No
 *    Yes
 *    No
 *
 *        Created:  03/15/2015 23:29:19
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int is_palin(long a[],int n){
	int i;
	for(i=0;i<n/2+1;++i)
		if(a[i]!=a[n-1-i])
			return 0;
	return 1;
}
int main(){
	int t,n,i;
	long sum1,sum2,a[1010];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0,sum1=sum2=0;i<n;++i){
			scanf("%ld",&a[i]);
			if(i%2==0)
				sum1+=a[i];
			else
				sum2+=a[i];
		}
		if(sum1==sum2&&!is_palin(a,n))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
