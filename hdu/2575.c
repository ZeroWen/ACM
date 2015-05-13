/*
 * =====================================================================================
 *
 *       Filename:  2575.c
 *
 *    Description:  
 *    In this problem,we need to count the number that accord with the following rule(include the input number n).Read a integer number n(1<=n<=2^31 - 1) first,then do as following ways: 
 *    (1)Do nothing, then exit the process.
 *    (2)Add a digit to the left of it,but the digit should not bigger than the half of the original first digit.For example,from 36 to 136 is legal,but 36 to 236 is illegal because 2 is bigger than half of 3. 
 *    (3)After add the digit,continue the process,until could not add digit anymore.
 *    Input
 *    The first line of the input contains an integer T which means the number of test cases.Then T lines follow, each line starts with a number n(1<=n<=2^31 - 1).
 *    Output
 *    For each test case, you should output one line contains the number that accord with the rule start from n.
 *    Sample Input
 *    2
 *    1
 *    6
 *    Sample Output
 *    1
 *    6
 *
 *        Created:  05/13/2015 20:49:40
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,key[9]={1,2,2,4,4,6,6,10,10};
	char str[15];
	scanf("%d",&t);
	while(t--){
		scanf("%s",str);
		printf("%d\n",key[str[0]-'0'-1]);
	}
	return 0;
}
