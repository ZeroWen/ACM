/*
 * =====================================================================================
 *
 *       Filename:  1527.c
 *
 *    Description:  
 *
 *
 *        Version:  1.0
 *        Created:  04/13/2014 19:52:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,t,sign;
	while(scanf("%d%d",&a,&b)!=EOF){
		sign=0;
		if(a==b||a*b==0)
			sign=1;
		else{
			if(a<b){
				t=a;
				a=b;
				b=t;
			}
			if(a==2&&b==1)
				sign=0;
			else
				sign=(a==2*b-1)?0:1;
		}
		printf("%d\n",sign);
	}
	return 0;
}
