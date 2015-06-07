/*
 * =====================================================================================
 *
 *       Filename:  1455.c
 *
 *    Description:  
 *    Problem Description
 *    George took sticks of the same length and cut them randomly until all parts became at most 50 units long. Now he wants to return sticks to the original state, but he forgot how many sticks he had originally and how long they were originally. Please help him and design a program which computes the smallest possible original length of those sticks. All lengths expressed in units are integers greater than zero. 
 *    Input
 *    The input contains blocks of 2 lines. The first line contains the number of sticks parts after cutting, there are at most 64 sticks. The second line contains the lengths of those parts separated by the space. The last line of the file contains zero.
 *    Output
 *    The output file contains the smallest possible length of original sticks, one per line. 
 *    Sample Input
 *    9
 *    5 2 1 5 2 1 5 2 1
 *    4
 *    1 2 3 4
 *    0
 *    Sample Output
 *    6
 *    5
 *
 *        Created:  04/28/2014 14:43:54
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int max,n,a[64],i,j,k,sum;
	while(scanf("%d",&n),n){
		for(i=sum=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
			if(!i||max<a[i])
				max=a[i];
		}
		for(i=0;i<n;i++)
			for(j=n-1;j>i;j--)
				if(a[j]<a[j-1]){
					k=a[j];
					a[j]=a[j-1];
					a[j-1]=k;
				}
		for(i=max;i<=sum;i++)
			if(sum%i==0)
				break;
		if(i)
		printf("%d\n",i);
	}
	return 0;
}
