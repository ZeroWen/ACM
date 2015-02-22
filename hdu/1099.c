/*
 * =====================================================================================
 *
 *       Filename:  1099.c
 *
 *    Description:  
 *    Eddy's company publishes a kind of lottery.This set of lottery which are numbered 1 to n, and a set of one of each is required for a prize .With one number per lottery, how many lottery on average are required to make a complete set of n coupons?
 *    Input
 *    Input consists of a sequence of lines each containing a single positive integer n, 1<=n<=22, giving the size of the set of coupons.
 *    Output
 *    For each input line, output the average number of lottery required to collect the complete set of n coupons. If the answer is an integer number, output the number. If the answer is not integer, then output the integer part of the answer followed by a space and then by the proper fraction in the format shown below. The fractional part should be irreducible. There should be no trailing spaces in any line of ouput.
 *    Sample Input
 *    2
 *    5
 *    17
 *    Sample Output
 *    3
 *       5
 *    11 --
 *       12
 *       340463
 *    58 ------
 *       720720
 *
 *        Created:  02/22/2015 22:32:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
__int64 gcd(__int64 a,__int64 b){
	return b==0?a:gcd(b,a%b); 
}
int main(){
	int i,j,prime[]={2,3,5,7,11,13,17,19},n,t;
	__int64 s1,s2,m,d,gd;
    while(scanf("%d",&n)!=EOF){
		s2=1;
		s1=t=0;
		if(n==21||n==22){
			for(i=2;i<21;i++)
				s2*=i;
			d=s2/n;
			for(i=1;i<=n;i++){
				s1+=s2/i;
				while(s1>d){
					s1-=d;
					t++;
				}
			}
			gd=gcd(d,s1);s1/=gd;s2=d/gd;
		}
		else{
			for(i=2;i<n;i++)
				s2*=i;
			for(i=1;i<=n;i++)
				s1+=n*s2/i;
			t=s1/s2;
			s1%=s2;
			gd=gcd(s2,s1);
			s1/=gd;
			s2/=gd;
        }
        m=t;
        if(!s1){
            printf("%d\n",t);
			continue;
		}
        while(m/=10)
			printf(" ");
        printf("  %I64d\n",s1);
        printf("%d ",t);
        m=s2;
        while(m/=10)
			printf("-");
        printf("-\n");
        m=t;
        while(m/=10)
			printf(" ");
        printf("  %I64d\n",s2);
    }
    return 0;
}
