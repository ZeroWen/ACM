/*
 * =====================================================================================
 *
 *       Filename:  1230.c
 *
 *    Description:  
 *    读入两个不超过25位的火星正整数A和B，计算A+B。需要注意的是：在火星上，整数不是单一进制的，第n位的进制就是第n个素数。例如：地球上的10进制数2，在火星上记为“1,0”，因为火星个位数是2进制的；地球上的10进制数38，在火星上记为“1,1,1,0”，因为火星个位数是2进制的，十位数是3进制的，百位数是5进制的，千位数是7进制的……
 *    Input
 *    测试输入包含若干测试用例，每个测试用例占一行，包含两个火星正整数A和B，火星整数的相邻两位数用逗号分隔，A和B之间有一个空格间隔。当A或B为0时输入结束，相应的结果不要输出。
 *    Output
 *    对每个测试用例输出1行，即火星表示法的A+B的值。
 *    Sample Input
 *    1,0 2,1
 *    4,2,0 1,2,0
 *    1 10,6,4,2,1
 *    0 0
 *    Sample Output
 *    1,0,1
 *    1,1,1,0
 *    1,0,0,0,0,0
 *
 *        Created:  02/25/2015 02:37:55
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int prime[30]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void add(int a[],int b[],int ia,int ib){
	int flag=0,i=0,ta=ia;
	--ia;
	--ib;
	while(ia>=0){
		if(ib>=0)
			a[ia]+=b[ib]+flag;
		else
			a[ia]+=flag;
		flag=(a[ia]>=prime[i]);
		if(flag)
			a[ia]-=prime[i];
		++i;
		--ia;
		if(ib>=0)
			--ib;
	}
	if(flag)
		printf("1,");
	for(ia=0;ia<ta;++ia){
		printf("%d%s",a[ia],(ia==ta-1)?"\n":",");
	}
}

int main(){
	int a[30],b[30],t,ia,ib,sign=0;
	char c;
	while(scanf("%d",&t)!=0){
		if(sign==0){
			ia=ib=0;
			sign=1;
		}
		if(sign==1)
			a[ia++]=t;
		if(sign==2)
			b[ib++]=t;
		scanf("%c",&c);
		if(c==' ')
			sign=2;
		else if(c=='\n'){
			if(ib==1&&ia==1&&!a[0]&&!b[0])
				break;
			sign=0;
			if(ia>ib)
				add(a,b,ia,ib);
			else
				add(b,a,ib,ia);
		}
	}
	return 0;
}
