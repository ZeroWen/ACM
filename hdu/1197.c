/*
 * =====================================================================================
 *
 *       Filename:  1197.c
 *
 *    Description:  
 *    Problem Description
 *    Find and list all four-digit numbers in decimal notation that have the property that the sum of its four digits equals the sum of its digits when represented in hexadecimal (base 16) notation and also equals the sum of its digits when represented in duodecimal (base 12) notation.
 *    For example, the number 2991 has the sum of (decimal) digits 2+9+9+1 = 21. Since 2991 = 1*1728 + 8*144 + 9*12 + 3, its duodecimal representation is 1893(12), and these digits also sum up to 21. But in hexadecimal 2991 is BAF16, and 11+10+15 = 36, so 2991 should be rejected by your program.
 *    The next number (2992), however, has digits that sum to 22 in all three representations (including BB016), so 2992 should be on the listed output. (We don't want decimal numbers with fewer than four digits - excluding leading zeroes - so that 2992 is the first correct answer.)
 *    Input
 *    There is no input for this problem.
 *    Output
 *    Your output is to be 2992 and all larger four-digit numbers that satisfy the requirements (in strictly increasing order), each on a separate line with no leading or trailing blanks, ending with a new-line character. There are to be no blank lines in the output. The first few lines of the output are shown below.
 *    Sample Input
 *    There is no input for this problem.
 *    Sample Output
 *    2992
 *    2993
 *    2994
 *    2995
 *    2996
 *    2997
 *    2998
 *    2999
 *
 *        Created:  04/17/2014 16:02:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int foo(int n,int r){
	int sum=0;
	for(;n;n/=r)
		sum+=n%r;
	return sum;
}
int main(){
	int i,j,r[3]={10,12,16};
	for(i=2992;i<10000;++i){
		for(j=1;j<3;++j)
			if(foo(i,r[j])!=foo(i,r[j-1]))
				break;
		if(j==3)
			printf("%d\n",i);
	}
	return 0;
}
