/*
 * =====================================================================================
 *
 *       Filename:  3438.c
 *
 *    Description:  
 *    The look and say sequence is defined as follows. Start with any string of digits as the first element in the sequence. Each subsequent element is defined from the previous one by "verbally" describing the previous element. For example, the string 122344111 can be described as "one 1, two 2's, one 3, two 4's, three 1's". Therefore, the element that comes after 122344111 in the sequence is 1122132431. Similarly, the string 101 comes after 1111111111. Notice that it is generally not possible to uniquely identify the previous element of a particular element. For example, a string of 112213243 1's also yields 1122132431 as the next element.
 *    Input
 *    The input consists of a number of cases. The first line gives the number of cases to follow. Each case consists of a line of up to 1000 digits.
 *    Output
 *    For each test case, print the string that follows the given string.
 *    Sample Input
 *    3
 *    122344111
 *    1111111111
 *    12345
 *    Sample Output
 *    1122132431
 *    101
 *    1112131415
 *
 *        Created:  05/04/2014 14:42:26
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i,j;
	char a[1001];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%s",a);
			for(i=0;a[i]!='\0';i=j){
				j=i+1;
				while(a[j]==a[i])
					j++;
				printf("%d%c",j-i,a[i]);
			}
			putchar('\n');
		}
	return 0;
}
/*
 * 这数据测的#_#
 * 在POJ数组定为1000都不行！
 */
