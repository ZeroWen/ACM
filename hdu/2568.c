/*
 * =====================================================================================
 *
 *       Filename:  2568.c
 *
 *    Description:  
 *    Problem Description
 *    轻松通过墓碑，进入古墓后，才发现里面别有洞天。
 *    突然，Yifenfei发现自己周围是黑压压的一群蝙蝠，个个扇动翅膀正准备一起向他发起进攻！
 *    形势十分危急！
 *    好在此时的yifenfei已经不是以前那个经常被lemon抢走MM的菜鸟了！面对众多蝙蝠的嗜血狂攻，只见yifenfei使出轻灵的剑法，刷，刷，刷，瞬间搞定……
 *    现已知yifenfei使用了2招（剑招A和剑招B）：剑招A，一招能杀死一半的蝙蝠。但是如果当前的蝙蝠数为奇数，那么就必须先出一招剑招B杀死其中任意一个，使蝙蝠数为偶数，再出剑招A。
 *    现在请问：杀死n只蝙蝠需要使出多少招剑招B？
 *    Input
 *    输入数据首先给出一个整数C，表示测试组数。
 *    然后是C组数据，每组包含一个正整数n (n<2^31)。
 *    Output
 *    对应每组数据，请输出一个整数，表示yifenfei使用的剑招B的数目，每组输出占一行。
 *    Sample Input
 *    2
 *    1
 *    5
 *    Sample Output
 *    1
 *    2
 *
 *        Created:  04/16/2014 17:56:57
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int c,n,b;
	while(scanf("%d",&c)!=EOF)
		while(c--){
			scanf("%d",&n);
			b=0;
			while(n){
				if(n%2){
					n--;
					b++;
				}
				else
					n/=2;
			}
			printf("%d\n",b);
		}
	return 0;
}
