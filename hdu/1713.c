/*
 * =====================================================================================
 *
 *       Filename:  1713.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/19/2014 12:38:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
__int64 f(__int64 a,__int64 b){
	__int64 i=0;
	while(b!=0){
		i=a%b;
		a=b;
		b=i;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		__int64 i,a,b,c,d,x,y;
		scanf("%I64d/%I64d %I64d/%I64d",&a,&b,&c,&d);
		x=a*d;
		y=b*c;
		x=x/f(x,y)*y;
		y=b*d;
		i=f(x,y);
		if(y/i==1&&x>=y)
			printf("%I64d\n",x/i);
		else
			printf("%I64d/%I64d\n",x/i,y/i);
	}
	return 0;
}

//垃圾题目
