/*
 * =====================================================================================
 *
 *       Filename:  1222.c
 *
 *    Description:  
 *    Problem Description
 *    There is a hill with n holes around. The holes are signed from 0 to n-1.
 *    A rabbit must hide in one of the holes. A wolf searches the rabbit in anticlockwise order. The first hole he get into is the one signed with 0. Then he will get into the hole every m holes. For example, m=2 and n=6, the wolf will get into the holes which are signed 0,2,4,0. If the rabbit hides in the hole which signed 1,3 or 5, she will survive. So we call these holes the safe holes.
 *    Input
 *    The input starts with a positive integer P which indicates the number of test cases. Then on the following P lines,each line consists 2 positive integer m and n(0<m,n<2147483648).
 *    Output
 *    For each input m n, if safe holes exist, you should output "YES", else output "NO" in a single line.
 *    Sample Input
 *    2
 *    1 2
 *    2 2
 *    Sample Output
 *    NO
 *    YES
 *
 *    Created:  07/12/14 21:44:06
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int p,sign;
	long m,n;
	scanf("%d",&p);
	while(p--){
		scanf("%ld%ld",&m,&n);
		if((m%2==0&&n%2==0)||((m%n==0||n%m==0)&&n!=1&&m!=1))
			sign=1;
		else
			sign=0;
		printf("%s\n",sign?"YES":"NO");
	}
	return 0;
}

/*
 * 1 2 no
 * 2 2 yes
 * 3 2 no
 */
