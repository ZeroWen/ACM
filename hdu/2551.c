/*
 * =====================================================================================
 *
 *       Filename:  2551.c
 *
 *    Description:  
 *    Problem Description
 *    "临流揽镜曳双魂 落红逐青裙 依稀往梦幻如真 泪湿千里云"
 *    在MCA山上,除了住着众多武林豪侠之外,还生活着一个低调的世外高人,他本名逐青裙,因为经常被人叫做"竹蜻蜓",终改名逐青,常年隐居于山中,不再见外人.根据山上附近居民所流传的说法,逐青有一个很奇怪的癖好,从他住进来那天开始,他就开始在他的院子周围种竹子,第1个月种1根竹子,第2个月种8根竹子,第3个月种27根竹子...第N个月就种(N^3)根竹子.他说当他种下第X根竹子那一刻,就是他重出江湖之时!告诉你X的值,你能算出逐青的复出会是在第几个月吗?
 *    Input
 *    首先输入一个t,表示有t组数据，跟着t行.每行是一个整数X,X < 1000000000
 *    Output
 *    输出一个整数n,表示在第n个月复出
 *    Sample Input
 *    3
 *    1
 *    2
 *    10
 *    Sample Output
 *    1
 *    2
 *    3
 *
 *    Created:  07/02/14 18:46:59
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,i;
	long n,a[1001];
	for(i=0;i<1001;i++)
		a[i]=i*i*i;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		for(i=1;n>0;i++)
			n-=a[i];
		printf("%d\n",i-1);
	}
	return 0;
}