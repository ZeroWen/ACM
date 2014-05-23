/*
 * =====================================================================================
 *
 *       Filename:  1874.c
 *
 *    Description:  
 *    Children are taught to add multi-digit numbers from right-to-left one digit at a time. Many find the "carry" operation - in which a 1 is carried from one digit position to be added to the next - to be a significant challenge. Your job is to count the number of carry operations for each of a set of addition problems so that educators may assess their difficulty.
 *    Input
 *    Each line of input contains two unsigned integers less than 10 digits. The last line of input contains 0 0.
 *    Output
 *    For each line of input except the last you should compute and print the number of carry operations that would result from adding the two numbers, in the format shown below.
 *    Sample Input
 *    123 456
 *    555 555
 *    123 594
 *    0 0
 *    Sample Output
 *    No carry operation.
 *    3 carry operations.
 *    1 carry operation.
 *
 *        Created:  05/04/2014 14:59:51
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	unsigned long a,b;
	int i,sign;
	while(1){
		scanf("%lu%lu",&a,&b);
		if(!a&&!b)
			break;
		for(sign=i=0;a||b;i+=sign,a/=10,b/=10)
			if(a%10+b%10+sign>9)
				sign=1;
			else
				sign=0;
		if(!i)
			printf("No carry operation.\n");
		else if(i==1)
			printf("%d carry operation.\n",i);
		else
			printf("%d carry operations.\n",i);
	}
	return 0;
}

/*
 * 1的时候要输出operation!!!!!
 */
