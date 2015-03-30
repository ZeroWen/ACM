/*
 * =====================================================================================
 *
 *       Filename:  3916.c
 *
 *    Description:  
 *    The company Al's Chocolate Mangos has a web site where visitors can guess how many chocolate covered mangos are in a virtual jar. Visitors type in a guess between 1 and 99 and then click on a "Submit" button. Unfortunately, the response time from the server is often long, and visitors get impatient and click "Submit" several times in a row. This generates many duplicate requests.
 *    Your task is to write a program to assist the staff at ACM in filtering out these duplicate requests.
 *    Input
 *    The input consists of a series of lines, one for each web session. The first integer on a line is N, 0 < N ≤ 25, which is the number of guesses on this line. These guesses are all between 1 and 99, inclusive. The value N = 0 indicates the end of all the input.
 *    Output
 *    For each input data set, output a single line with the guesses in the original order, but with consecutive duplicates removed. Conclude each output line with the dollar sign character '$'. Note that there is a single space between the last integer and the dollar sign.
 *    Sample Input
 *    5 1 22 22 22 3
 *    4 98 76 20 76
 *    6 19 19 35 86 86 86
 *    1 7
 *    0
 *    Sample Output
 *    1 22 3 $
 *    98 76 20 76 $
 *    19 35 86 $
 *    7 $
 *
 *        Created:  03/30/2015 23:15:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,n,a[30];
	while(scanf("%d",&n)!=EOF){
		if(!n)
			break;
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=0;i<n;++i){
			if(i&&a[i]==a[i-1])
				continue;
			printf("%d ",a[i]);
		}
		printf("$\n");
	}
	return 0;
}
