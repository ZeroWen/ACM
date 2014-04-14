/*
 * =====================================================================================
 *
 *       Filename:  2092.c
 *
 *    Description:  
 *    Problem Description
 *    有二个整数，它们加起来等于某个整数，乘起来又等于另一个整数，它们到底是真还是假，也就是这种整数到底存不存在，实在有点吃不准，你能快速回答吗？看来只能通过编程。
 *    例如：
 *    x + y = 9，x * y = 15 ? 找不到这样的整数x和y
 *    1+4=5，1*4=4，所以，加起来等于5，乘起来等于4的二个整数为1和4
 *    7+(-8)=-1，7*（-8）=-56，所以，加起来等于-1，乘起来等于-56的二个整数为7和-8
 *    Input
 *    输入数据为成对出现的整数n，m（-10000<n,m<10000），它们分别表示整数的和与积，如果两者都为0，则输入结束。
 *    Output
 *    只需要对于每个n和m，输出“Yes”或者“No”，明确有还是没有这种整数就行了。
 *    Sample Input
 *    9 15
 *    5 4
 *    1 -56
 *    0 0
 *    Sample Output
 *    No
 *    Yes
 *    Yes
 *
 *        Version:  1.0
 *        Created:  04/14/2014 14:30:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int n,m,sign;
	double v,c;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==0&&m==0)
			break;
		sign=1;
		v=n*n-4*m;
		if(v<0)
			sign=0;
		c=sqrt(v);
		if(fabs(c-(long)c)>0.00001)
			sign=0;
		if((long)(v+c)%2!=0)
			sign=0;
		printf("%s\n",sign?"Yes":"No");
	}
	return 0;
}

//竟然因为写成了"YES"和"NO"而WA了两次!!!!
