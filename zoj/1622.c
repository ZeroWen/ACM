/*
 * =====================================================================================
 *
 *       Filename:  1622.c
 *
 *    Description:  
 *    There are N lights in a line. Given the states (on/off) of the lights, your task is to determine at least how many lights should be switched (from on to off, or from off to on), in order to make the lights on and off alternatively.
 *    Input
 *    One line for each testcase.
 *    The integer N (1 <= N <= 10000) comes first and is followed by N integers representing the states of the lights ("1" for on and "0" for off).
 *    Process to the end-of-file.
 *    Output
 *    For each testcase output a line consists of only the least times of switches.
 *    Sample Input
 *    3 1 1 1
 *    3 1 0 1
 *    Sample Output
 *    1
 *    0
 *
 *        Created:  05/10/2014 20:41:55
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,s[10002],i,a,b;
	while(scanf("%d",&n)!=EOF){
		for(i=a=b=0;i<n;i++){
			scanf("%d",&s[i]);
			if((i%2&&s[i])||(i%2==0&&s[i]==0))
				a++;
			if((i%2&&s[i]==0)||(i%2==0&&s[i]))
				b++;
		}
		printf("%d\n",a>b?b:a);
	}
	return 0;
}
