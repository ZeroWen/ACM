/*
 * =====================================================================================
 *
 *       Filename:  2089.c
 *
 *    Description:  
 *    Problem Description
 *    杭州人称那些傻乎乎粘嗒嗒的人为62（音：laoer）。
 *    杭州交通管理局经常会扩充一些的士车牌照，新近出来一个好消息，以后上牌照，不再含有不吉利的数字了，这样一来，就可以消除个别的士司机和乘客的心理障碍，更安全地服务大众。
 *    不吉利的数字为所有含有4或62的号码。例如：
 *    62315 73418 88914
 *    都属于不吉利号码。但是，61152虽然含有6和2，但不是62连号，所以不属于不吉利数字之列。
 *    你的任务是，对于每次给出的一个牌照区间号，推断出交管局今次又要实际上给多少辆新的士车上牌照了。
 *    Input
 *    输入的都是整数对n、m（0<n≤m<1000000），如果遇到都是0的整数对，则输入结束。
 *    Output
 *    对于每个整数对，输出一个不含有不吉利数字的统计个数，该数值占一行位置。
 *    Sample Input
 *    1 100
 *    0 0
 *    Sample Output
 *    80
 *
 *        Created:  06/12/2014 13:03:57
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define N 1000002
int data[N];
int main(){
	long n,m,i,j,temp;
	for(i=0;i<N;i++){
		data[i]=1;
		for(temp=i;temp;temp/=10)
			if(temp%10==4||temp%100==62){
				data[i]=0;
				break;
			}
	}
	while(scanf("%ld%ld",&n,&m)!=EOF){
		if(!n&&!m)
			break;
		for(i=n,j=0;i<=m;i++)
			j+=data[i];
		printf("%ld\n",j);
	}
	return 0;
}
