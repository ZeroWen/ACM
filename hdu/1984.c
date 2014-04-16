/*
 * =====================================================================================
 *
 *       Filename:  1984.c
 *
 *    Description:  
 *    Problem Description
 *    Misspelling is an art form that students seem to excel at. Write a program that removes the nth character from an input string.
 *    Input
 *    The first line of input contains a single integer N, (1 ≤ N ≤ 1000) which is the number of datasets that follow.
 *    Each dataset consists of a single line of input containing M, a space, and a single word made up of uppercase letters only. M will be less than or equal to the length of the word. The length of the word is guaranteed to be less than or equal to 80.
 *    Output
 *    For each dataset, you should generate one line of output with the following values: The dataset number as a decimal integer (start counting at one), a space, and the misspelled word. The misspelled word is the input word with the indicated character deleted.
 *    Sample Input
 *    4
 *    4 MISSPELL
 *    1 PROGRAMMING
 *    7 CONTEST
 *    3 BALLOON
 *    Sample Output
 *    1 MISPELL
 *    2 ROGRAMMING
 *    3 CONTES
 *    4 BALOON
 *
 *        Version:  1.0
 *        Created:  04/16/2014 11:10:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,j;
	char c;
	while(scanf("%d",&n)!=EOF)
		for(i=0;i<n;i++){
			j=0;
			scanf("%d",&m);
			getchar();
			printf("%d ",i+1);
			while((c=getchar())!='\n'){
				j++;
				if(j!=m)
					putchar(c);
			}
			putchar('\n');
		}
	return 0;
}
