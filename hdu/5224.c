/*
 * =====================================================================================
 *
 *       Filename:  5224.c
 *
 *    Description:  
 *    There is a piece of paper in front of Tom, its length and width are integer. Tom knows the area of this paper, he wants to know the minimum perimeter of this paper.
 *    Input
 *    In the first line, there is an integer T indicates the number of test cases. In the next T lines, there is only one integer n in every line, indicates the area of paper.
 *    T≤10,n≤109
 *    Output
 *    For each case, output a integer, indicates the answer.
 *    Sample Input
 *    3
 *    2
 *    7
 *    12
 *    Sample Output
 *    6
 *    16
 *    14
 *
 *        Created:  05/12/2015 02:00:25
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int t;
	long i,n;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		for(i=sqrt(n);i>0;--i){
			if(n%i==0)
				break;
		}
		printf("%ld\n",2*(i+n/i));
	}
}
