/*
 * =====================================================================================
 *
 *       Filename:  2970.c
 *
 *    Description:  
 *    In the year 2008, the 29th Olympic Games will be held in Beijing. This will signify the prosperity of China and Beijing Olympics is to be a festival for people all over the world as well.
 *    The motto of Olympic Games is "Citius, Altius, Fortius", which means "Faster, Higher, Stronger".
 *    In this problem, there are some records in the Olympic Games. Your task is to find out which one is faster, which one is higher and which one is stronger.
 *    Input
 *    Standard input will contain multiple test cases. The first line of the input is a single integer T (1 <= T <= 50) which is the number of test cases. And it will be followed by T consecutive test cases.
 *    Each test case has 3 lines. The first line is the type of the records, which can only be "Faster" "Higher" or "Stronger". The second line is a positive integer N meaning the number of the records in this test case. The third line has N positive integers, i.e. the records data. All the integers in this problem are smaller than 2008.
 *    Output
 *    Results should be directed to standard output. The output of each test case should be a single integer in one line. If the type is "Faster", the records are time records and you should output the fastest one. If the type is "Higher", the records are length records. You should output the highest one. And if the type is "Stronger", the records are weight records. You should output the strongest one.
 *    Sample Input
 *    3
 *    Faster
 *    3
 *    10 11 12
 *    Higher
 *    4
 *    3 5 4 2
 *    Stronger
 *    2
 *    200 200
 *    Sample Output
 *    10
 *    5
 *    200
 *
 *        Created:  04/26/2014 02:02:45
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,a[2008],i,max,min;
	char str[9];
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%s",str);
			scanf("%d",&n);
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
				if(!i)
					max=min=a[0];
				else{
					if(max<a[i])
						max=a[i];
					if(min>a[i])
						min=a[i];
				}
			}
			printf("%d\n",(str[0]=='F')?min:max);
		}
	return 0;
}
