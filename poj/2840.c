/*
 * =====================================================================================
 *
 *       Filename:  2840.c
 *
 *    Description:  
 *    Our vicar raised money to have the church clock repaired for several weeks. The big clock, which used to strike the hours days and nights, was damaged several weeks ago and had been silent since then.
 *    After the clock was repaired, it works all right, but there is still something wrong with it: the clock will strike thirteen times at one o’clock, fourteen times at two o’clock... 24 times at 12:00, 1 time at 13:00...
 *    How many times will it strike now?
 *    Input
 *    The first line consists of only one integer T (T <= 30), representing the number of test cases. Then T cases follow.
 *    Each test case consists of only one line, representing the time now. Each line includes 2 integers H, M separated by a symbol ":". (0 <= H < 24, 0 <= M < 60)
 *    Output
 *    For each test case, output the answer in one line.
 *    Sample Input
 *    3
 *    1:00
 *    01:01
 *    00:00
 *    Sample Output
 *    13
 *    0
 *    12
 *
 *        Created:  03/21/2015 00:16:01
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,h,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d:%d",&h,&m);
		printf("%d\n",(!m)?((h<13)?(12+h):(h-12)):0);
	}
	return 0;
}
