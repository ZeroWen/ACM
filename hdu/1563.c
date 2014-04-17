/*
 * =====================================================================================
 *
 *       Filename:  1563.c
 *
 *    Description:  
 *    Problem Description
 *    In the new year party, everybody will get a "special present".Now it's your turn to get your special present, a lot of presents now putting on the desk, and only one of them will be yours.Each present has a card number on it, and your present's card number will be the one that different from all the others.For example, there are 5 present, and their card numbers are 1, 2, 3, 2, 1.so your present will be the one with the card number of 3, because 3 is the number that different from all the others.
 *    Input
 *    The input file will consist of several cases. 
 *    Each case will be presented by an integer n (1<=n<=200, and n is odd) at first. Following that, n positive integers will be given in a line. These numbers indicate the card numbers of the presents.n = 0 ends the input.
 *    Output
 *    For each case, output an integer in a line, which is the card number of your present.
 *    Sample Input
 *    5
 *    1 1 3 2 2
 *    3
 *    1 2 1
 *    0
 *    Sample Output
 *    3
 *    2
 *
 *        Created:  04/17/2014 16:47:58
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,a[200],j,t,sign;
	while(scanf("%d",&n),n){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]<a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		for(i=0,sign=0;i<n-1;i++)
			if(a[i+1]==a[i])
				sign++;
			else{
				if(sign)
					sign=0;
				else{
					printf("%d\n",a[i]);
					break;
				}
			}
		if(i==n-1&&!sign)
			printf("%d\n",a[i]);
	}
	return 0;
}
