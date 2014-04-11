/*
 * =====================================================================================
 *
 *       Filename:  1201.c
 *
 *    Description:  
 *    Problem Description
 *    Gardon的18岁生日就要到了，他当然很开心，可是他突然想到一个问题，是不是每个人从出生开始，到达18岁生日时所经过的天数都是一样的呢？似乎并不全都是这样，所以他想请你帮忙计算一下他和他的几个朋友从出生到达18岁生日所经过的总天数，让他好来比较一下。
 *    Input
 *    一个数T，后面T行每行有一个日期，格式是YYYY-MM-DD。如我的生日是1988-03-07。
 *    Output
 *    T行，每行一个数，表示此人从出生到18岁生日所经过的天数。如果这个人没有18岁生日，就输出-1。
 *    Sample Input
 *    1
 *    1988-03-07
 *    Sample Output
 *    6574
 *
 *        Version:  1.0
 *        Created:  04/11/2014 21:22:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int leap(int year){
	return (year%400==0||(year%4==0&&year%100!=0));
}
int main(){
	int year,mon,day,i,s,n;
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%d-%d-%d",&year,&mon,&day);
			if(mon==2&&day==29&&!leap(year+18))
				s=-1;
			else{
				s=6570;
				for(i=1;i<18;i++)
					if(leap(year+i))
						s++;
				if((mon==1||(mon==2&&day<29))&&leap(year))
					s++;
				if(((mon==2&&day==29)||mon>2)&&leap(year+18))
					s++;
			}
			printf("%d\n",s);
		}
	return 0;
}

/*
 * 绝对不要因为图省事而用宏！！！
 *
 * 错误了三次，谨记
 */
