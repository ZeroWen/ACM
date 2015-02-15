/*
 * =====================================================================================
 *
 *       Filename:  1262.c
 *
 *    Description:  
 *    Input
 *    输入中是一些偶整数M(5<M<=10000).
 *    Output
 *    对于每个偶数,输出两个彼此最接近的素数,其和等于该偶数.
 *    Sample Input
 *    20
 *    30
 *    40
 *    Sample Output
 *    7 13
 *    13 17
 *    17 23
 *
 *        Created:  02/15/2015 22:33:50
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int foo(int a){
	int i;
	for(i=2;i*i<=a;++i){
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int m,i,p,q;
	while(scanf("%d",&m)!=EOF){
		for(i=m/2;i>0;--i)
			if(foo(i)&&foo(m-i)){
				printf("%d %d\n",i,m-i);
				break;
			}
	}
	return 0;
}
