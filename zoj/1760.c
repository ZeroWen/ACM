/*
 * =====================================================================================
 *
 *       Filename:  1760.c
 *
 *    Description:  
 *    As part of an arithmetic competency program, your students will be given randomly generated lists of from 2 to 15 unique positive integers and asked to determine how many items in each list are twice some other item in the same list. You will need a program to help you with the grading. This program should be able to scan the lists and output the correct answer for each one. For example, given the list
 *    1 4 3 2 9 7 18 22
 *    your program should answer 3, as 2 is twice 1, 4 is twice 2, and 18 is twice 9.
 *    Input
 *    The input file will consist of one or more lists of numbers. There will be one list of numbers per line. Each list will contain from 2 to 15 unique positive integers. No integer will be larger than 99. Each line will be terminated with the integer 0, which is not considered part of the list. A line with the single number -1 will mark the end of the file. The example input below shows 3 separate lists. Some lists may not contain any doubles.
 *    Output
 *    The output will consist of one line per input list, containing a count of the items that are double some other item.
 *    Sample Input
 *    1 4 3 2 9 7 18 22 0
 *    2 4 8 10 0
 *    7 5 11 13 1 3 0
 *    -1
 *    Sample Output
 *    3
 *    2
 *    0
 *
 *        Created:  04/26/2014 02:04:54
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a[15],i,j,k,t,n;
	while(1){
		i=0;
		while(scanf("%d",&a[i]),a[i++])
			if(a[0]==-1)
				return 0;
		for(j=0;j<i;j++)
			for(k=i-1;k>j;k--)
				if(a[k]<a[k-1]){
					t=a[k];
					a[k]=a[k-1];
					a[k-1]=t;
				}
		for(j=n=0;j<i;j++)
			for(k=j+1;k<i;k++)
				if(a[j]*2==a[k])
					n++;
		printf("%d\n",n);
	}
	return 0;
}
