/*
 * =====================================================================================
 *
 *       Filename:  2632.c
 *
 *    Description:  
 *    Samuel got an NOKIA N73 from his two aunts in the summer of 2007,he is so delighted that he often shows his cellphone off in public. But now he has a problem of his N73,because the appearance of his mobile phone is getting much uglier. As is known to all N73 users,N73's paint peels off easily. Due to Samuel's poor protection nearly all the paint on N73 has peeled off. So he made up his mind to do something with his cellphone. Now the cellphone seller gave him two pieces of advise:
 *    1.Sell N73 to buy a new one due to the fact that he has not got enough money. 
 *    2.Change the appearance of his N73,but if he changed the value of his cellphone will reduce.
 *    He has to make a decision. However,the right choice that will be made is based on the price he can get if he sells and the changing fee in case he changed N73's appearance. 
 *    Suppose the cellphone he bought at the price of x RMB,and the sell price is fixed at a RMB,if Samuel changes the appearance once the price of cellphone will be reduced by b(0<b<1).So the value of the cellphone after the change is x(1-b)^1.That is too say,if Samuel change for a second time the value is x(1-b)^2. Every time you should compare the left value with the sell price,if the former is higher than the later,Samuel will keep it for another month or he will sell it immediately. And the seller says he will change for Samuel for free. 
 *    The question is:
 *    How many times will Samuel change the appearance of his N73 before he decide to sell it at a second hand price? 
 *    Input
 *    The input consists 2 parts:
 *    the test case's number t. For each case,the input will contains the original price of N73 x, the money a he will get if he sells,and the reducing rate b. Notice all the numbers here are integers except b. 
 *    Output
 *    Output the time n Samuel will change his N73's appearance in the format of”Samuel will change the appearance for n time(s),before he decide to sell it.”
 *    Sample Input
 *    1
 *    3000 2000 0.1
 *    Sample Output
 *    Samuel will change the appearance for 3 time(s),before he decide to sell it.
 *
 *        Created:  05/12/2015 01:16:42
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n;
	double x,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf",&x,&a,&b);
		for(n=0;x>a;++n)
			x*=1-b;
		printf("Samuel will change the appearance for %d time(s),before he decide to sell it.\n",n-1);
	}
	return 0;
}
