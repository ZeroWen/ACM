/*
 * =====================================================================================
 *
 *       Filename:  5062.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/17/2015 20:58:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,a[8]={1,9,18,54,90,174,258,384};
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}
