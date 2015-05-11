/*
 * =====================================================================================
 *
 *       Filename:  2633.c
 *
 *    Description:  
 *    To get a driving license,you should pass the 4 parts one by one. For example,if you failed in the section 2,you have to retry for a second time,third time...before you pass. After that you have the opportunity to enter Part 3.
 *    Here is the problem section you need read patiently:
 *    Some details you need to know: 
 *    1.The time between the two tests is generally about 1 month(If you fail in the test on your first attempt,you can try it a second time. Fail again the second time he have to go home and retry after 1 month). 
 *    2.And the time from you take the first test to your owning a license is within 2 years.
 *    3.What's more,the passing score in Part 1 test is 90(that is to say if you get 89 or even lower at your first attempt,a second attempt is needed. You will pass until you get 90 or higher at the second time)and each of the rest parts the passing score is 80 at least.
 *    Input
 *    The input consists 2 major sections as usual,
 *    the test cases t,each of the test case involves an integer n and n scores one gets in the test and with n scores he passed the test or he failed to pass in the 2 years(of course here n>=4). All the number here are integers. 
 *    Output
 *    Output is simple. Just output the time one needs to get a driving license (if time is within 2 years)using the format “It takes about m months to get a driving license.”If time is beyond 2 years please output the sentence “He failed to get a driving license within 2 years! ”
 *    Sample Input
 *    3
 *    5
 *    89 90 95 84 80
 *    7
 *    80 90 70 80 75 85 80
 *    7
 *    80 90 70 70 80 85 85
 *    Sample Output
 *    It takes about 3 months to get a driving license.
 *    It takes about 3 months to get a driving license.
 *    It takes about 4 months to get a driving license.
 *
 *        Created:  05/12/2015 01:23:57
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i,a[100],month,tmpi;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=0;i<n;++i)
			if(a[i]>=90)
				break;
		month=i/2;
		for(tmpi=i;i<n;++i){
			if(a[i]>=80){
				month+=(i-tmpi+1)/2;
				tmpi=i;
			}
		}
		if(month>=24)
			printf("He failed to get a driving license within 2 years!\n");
		else
			printf("It takes about %d months to get a driving license.\n",month);
	}
	return 0;
}
