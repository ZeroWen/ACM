/*
 * =====================================================================================
 *
 *       Filename:  2247.c
 *
 *    Description:  
 *    Problem Description
 *    A number whose only prime factors are 2,3,5 or 7 is called a humble number. The sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 24, 25, 27, ... shows the first 20 humble numbers. 
 *    Write a program to find and print the nth element in this sequence
 *    Input
 *    The input consists of one or more test cases. Each test case consists of one integer n with 1 <= n <= 5842. Input is terminated by a value of zero (0) for n.
 *    Output
 *    For each test case, print one line saying "The nth humble number is number.". Depending on the value of n, the correct suffix "st", "nd", "rd", or "th" for the ordinal number nth has to be used like it is shown in the sample output.
 *    Sample Input
 *    1
 *    2
 *    3
 *    4
 *    11
 *    12
 *    13
 *    21
 *    22
 *    23
 *    100
 *    1000
 *    5842
 *    0
 *    Sample Output
 *    The 1st humble number is 1.
 *    The 2nd humble number is 2.
 *    The 3rd humble number is 3.
 *    The 4th humble number is 4.
 *    The 11th humble number is 12.
 *    The 12th humble number is 14.
 *    The 13th humble number is 15.
 *    The 21st humble number is 28.
 *    The 22nd humble number is 30.
 *    The 23rd humble number is 32.
 *    The 100th humble number is 450.
 *    The 1000th humble number is 385875.
 *    The 5842nd humble number is 2000000000.
 *
 *        Created:  05/02/2014 12:45:20
 *       Revision:  none
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
int a[5850];
int main(){
	int n=1;
	int p2,p3,p5,p7;
	p2=p3=p5=p7=1;
	a[1]=1;
	while(a[n]<2000000000){
		a[++n]=min4(2*a[p2],3*a[p3],5*a[p5],7*a[p7]);
		if(a[n]==2*a[p2])
			p2++;
		if(a[n]==3*a[p3])
			p3++;	
		if(a[n]==5*a[p5])
			p5++;
		if(a[n]==7*a[p7])
			p7++;
	}
	while(scanf("%d",&n),n){
		printf("The %d",n);
		int ten=n/10%10;
		if(n%10==1&&ten!=1)
			printf("st");
		else if(n%10==2&&ten!=1)
			printf("nd");
		else if(n%10==3&&ten!= 1)
			printf("rd");
		else
			printf("th");
		printf(" humble number is %d.\n",a[n]);
	}
	return 0;
}
