/*
 * =====================================================================================
 *
 *       Filename:  1476.c
 *
 *    Description:  
 *    Problem Description
 *    A weird clock marked from 0 to 59 has only a minute hand. It won't move until a special coin is thrown into its box. There are different kinds of coins as your options. However once you make your choice, you cannot use any other kind. There are infinite number of coins of each kind, each marked with a number d ( 1 <= d <= 1000 ), meaning that this coin will make the minute hand move d times clockwise the current time. For example, if the current time is 45, and d = 2. Then the minute hand will move clockwise 90 minutes and will be pointing to 15.
 *    Now you are given the initial time s ( 1 <= s <= 59 ) and the coin's type d. Write a program to find the minimum number of d-coins needed to turn the minute hand back to 0.
 *    Input
 *    There are several tests. Each test occupies a line containing two positive integers s and d.
 *    The input is finished by a line containing 0 0.
 *    Output
 *    For each test print in a single line the minimum number of coins needed. If it is impossible to turn the hand back to 0, output "Impossible".
 *    Sample Input
 *    30 1
 *    0 0
 *    Sample Output
 *    1
 *
 *    Created:  06/29/14 23:24:06
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int s,d,i;
	while(scanf("%d%d",&s,&d)){
		if(!s&&!d)
			break;
		for(i=1;s*(d+1)%60!=0&&i<1000;i++)
			s=s*(d+1)%60;
		if(i>=1000)
			printf("Impossible\n");
		else
			printf("%d\n",i);
	}
	return 0;
}
