/*
 * =====================================================================================
 *
 *       Filename:  2626.c
 *
 *    Description:  
 *    Welcome to ‘Samuel Design Contest’.Samuel greets you a happy 牛 Year. At new year and always,may peace and love fill your heart,beauty fill your world,joy and contentment fill your life and may you make great progress during the coming year both in your ACM and your study.
 *    The following problems are intended for you,especially for those rookies(usually known as “vegetable bird”in Chinglish).As it always does,the first problem is the easiest,I believe that you can work it out in a few minutes.
 *    The problem goes like this:
 *    Samuel is engaged at this new year's season and has a lot of things to do. For instance,he needs to buy new clothes,to prepare some food,to decorate the house and the like. Here is the schedule. 
 *    Based on the schedule,you need to answer what will Samuel do in N days before the New Year(2009.1.26 i the Spring Festival).
 *    Input
 *    The input include 2 parts:
 *    t(an integer,presents the t test cases),n(an integer,means n days before the New Year). 
 *    Output
 *    Just output what Samuel will do according to the schedule,like this”Samuel will *******.”.
 *    Sample Input
 *    3
 *    13
 *    3
 *    2
 *    Sample Output
 *    Samuel will take test.
 *    Samuel will stay at home.
 *    Samuel will decorate.
 *
 *        Created:  05/12/2015 01:47:30
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n;
	char str[20][15]={"prepare dinner","stay at home","visit relative","visit relative","stay at home","be in the park","go out","decorate","decorate","stay at home","go to movies","meet friends","go to KTV","visit teachers","stay at home","buy food","buy clothes","stay at home","go home","take test"};
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("Samuel will %s.\n",str[n+6]);
	}
	return 0;
}
