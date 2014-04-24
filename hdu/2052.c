/*
 * =====================================================================================
 *
 *       Filename:  2052.c
 *
 *    Description:  
 *    Problem Description
 *    Give you the width and height of the rectangle,darw it.
 *    Input
 *    Input contains a number of test cases.For each case ,there are two numbers n and m (0 < n,m < 75)indicate the width and height of the rectangle.Iuput ends of EOF.
 *    Output
 *    For each case,you should draw a rectangle with the width and height giving in the input.
 *    after each case, you should a blank line.
 *    Sample Input
 *    3 2
 *    Sample Output
 *    +---+
 *    |   |
 *    |   |
 *    +---+
 *
 *        Created:  04/24/2014 23:39:24
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
void printw(int n){
	putchar('+');
	while(n--)
		putchar('-');
	printf("+\n");
}
int main(){
	int n,m,i,j;
	while(scanf("%d%d",&n,&m)!=EOF)
		for(printw(n),i=0;i<m;i++){
			for(printf("|"),j=0;j<n;j++)
				printf("%s",(j==n-1)?" |\n":" ");
			if(i==m-1){
				printw(n);
				putchar('\n');
			}
		}
	return 0;
}
