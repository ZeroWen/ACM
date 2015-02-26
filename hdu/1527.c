/*
 * =====================================================================================
 *
 *       Filename:  1527.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2015 22:45:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	long a,b,k,t;
	while(scanf("%ld%ld",&a,&b)!=EOF){
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		k=b-a;
		t=(long)(k*(1.0+sqrt(5.0))/2.0);
		printf("%d\n",(a==t)?0:1);
	}
	return 0;
}
