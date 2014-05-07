/*
 * =====================================================================================
 *
 *       Filename:  4716.c
 *
 *    Description:  
 *    Problem Description
 *    In this problem we talk about the study of Computer Graphics. Of course, this is very, very hard.
 *    We have designed a new mobile phone, your task is to write a interface to display battery powers.
 *    Here we use '.' as empty grids.
 *    When the battery is empty, the interface will look like this:
*------------*
|............|
|............|
|............|
|............|
|............|
|............|
|............|
|............|
|............|
|............|
*------------*

When the battery is 60% full, the interface will look like this:
*------------*
|............|
|............|
|............|
|............|
|------------|
|------------|
|------------|
|------------|
|------------|
|------------|
*------------*

Each line there are 14 characters.
Given the battery power the mobile phone left, say x%, your task is to output the corresponding interface. Here x will always be a multiple of 10, and never exceeds 100.
Input
The first line has a number T (T < 10) , indicating the number of test cases.
For each test case there is a single line with a number x. (0 < x < 100, x is a multiple of 10)
Output
For test case X, output "Case #X:" at the first line. Then output the corresponding interface.
See sample output for more details.
Sample Input
2
0
60
Sample Output
Case #1:
*------------*
|............|
|............|
|............|
|............|
|............|
|............|
|............|
|............|
|............|
|............|
*------------*
Case #2:
*------------*
|............|
|............|
|............|
|............|
|------------|
|------------|
|------------|
|------------|
|------------|
|------------|
*------------*
 *
 *        Created:  05/07/2014 23:58:35
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
 int main(){
	 int t,x,i=1,j;
	 while(scanf("%d",&t)!=EOF)
		 while(t--){
			 scanf("%d",&x);
			 printf("Case #%d:\n",i++);;
			 printf("*------------*\n");
			 for(j=0;j<10;j++)
				 if(j<10-x/10)
					 printf("|............|\n");
				 else
					 printf("|------------|\n");
			 printf("*------------*\n");
		 }
	 return 0;
 }
