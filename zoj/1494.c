/*
 * =====================================================================================
 *
 *       Filename:  1494.c
 *
 *    Description:  
 *    An inch worm is at the bottom of a well n inches deep. It has enough energy to climb u inches every minute, but then has to rest a minute before climbing again. During the rest, it slips down d inches. The process of climbing and resting then repeats. How long before the worm climbs out of the well? We'll always count a portion of a minute as a whole minute and if the worm just reaches the top of the well at the end of its climbing, we'll assume the worm makes it out.
 *    Input
 *    There will be multiple problem instances. Each line will contain 3 positive integers n, u and d. These give the values mentioned in the paragraph above. Furthermore, you may assume d < u and n < 100. A value of n = 0 indicates end of output.
 *    Output
 *    Each input instance should generate a single integer on a line, indicating the number of minutes it takes for the worm to climb out of the well.
 *    Sample Input
 *    10 2 1
 *    20 3 1
 *    0 0 0
 *    Sample Output
 *    17
 *    19
 *
 *        Created:  04/26/2014 01:22:28
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,u,d,i;
	while(scanf("%d%d%d",&n,&u,&d),n){
		for(i=0;n>0;i++){
			n-=u;
			if(n>0){
				n+=d;
				i++;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
