/*
 * =====================================================================================
 *
 *       Filename:  1491.c
 *
 *    Description:  
 *    Problem Description
 *    HDU's 50th birthday, on Octorber 21st, is coming. What an exciting day!! As a student of HDU, I always want to know how many days are there between today and Octorber 21st.So, write a problem and tell me the answer.Of course, the date I give you is always in 2006.
 *    Input
 *    The input consists of T test cases. The number of T is given on the first line of the input file.Following T lines, which represent dates, one date per line. The format for a date is "month day" where month is a number between 1 (which indicates January) and 12 (which indicates December), day is a number between 1 and 31.All the date in the input are in 2006, you can assume that all the dates in the input are legal(合法).
 *    Output
 *    For each case, if the date is before Octorber 21st, you should print a number that between the date and Octorber 21st.If the day is beyond Octorber 21st, just print "What a pity, it has passed!".If the date is just Octorber 21st, print"It's today!!".
 *    Sample Input
 *    7
 *    10 20
 *    10 19
 *    10  1
 *    10 21
 *    9   1
 *    11 11
 *    12 12
 *    Sample Output
 *    1
 *    2
 *    20
 *    It's today!!
 *    50
 *    What a pity, it has passed!
 *    What a pity, it has passed!
 *
 *        Created:  06/27/2014 20:31:01
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int day_counter(int month,int day){
	int n;
	switch(month){
		case 1:n=294-day;break;
		case 2:n=263-day;break;
		case 3:n=235-day;break;
		case 4:n=204-day;break;
		case 5:n=174-day;break;
		case 6:n=143-day;break;
		case 7:n=113-day;break;
		case 8:n=82-day;break;
		case 9:n=51-day;break;
		case 10:n=21-day;break;
	}
	return n;
}
int main(){
	int t,month,day;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&month,&day);
		if(month==10&&day==21)
			printf("It's today!!\n");
		else if(month<10||(month==10&&day<21))
			printf("%d\n",day_counter(month,day));
		else
			printf("What a pity, it has passed!\n");
	}
	return 0;
}

/*
 * 注意"What a pity, it has passed!"中，逗号后有一个坑爹的空格
 */
