/*
 * =====================================================================================
 *
 *       Filename:  2547.c
 *
 *    Description:  
 *    Problem Description
 *    北宋末年，奸臣当道，宦官掌权，外侮日亟，辽军再犯。时下战火连连，烽烟四起，哀鸿遍野，民不聊生，又有众多能人异士群起而反，天下志士云集响应,景粮影从。
 *    值此危急存亡之秋，在一个与世隔绝的地方---MCA山上一位江湖人称<英雄哪里出来>的人正在为抗击辽贼研究剑法，终于于一雷电交加之夜精确计算出了荡剑回锋的剑气伤害公式。
 *    定义 f(x, y, m, n) = sqrt(x*x + y*y + m*m + n*n - 2*m*x - 2*n*y);
 *    hint : sqrt表示开方，即sqrt（4） = 2； sqrt（16） = 4；
 *    （其中x，y为位置变量，m，n为属性常量）
 *    剑气伤害 = f(x, y, a, b) + f(x, y, c, d)；
 *    剑气威力巨大无比，实难控制，现在他想知道剑气伤害的最小伤害值。
 *    Input
 *    首先输入一个t,表示有t组数据，跟着t行：
 *    输入四个实数a，b，c，d均小于等于100
 *    Output
 *    输出剑气的最小伤害值M，保留小数点后一位（可以使用.1lf）
 *    Sample Input
 *    2
 *    0 0 3 4
 *    4 0 0 3
 *    Sample Output
 *    5.0
 *    5.0
 *
 *        Created:  05/15/2014 14:31:07
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
	int t;
	double a,b,c,d,m;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		m=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		printf("%.1lf\n",m);
	}
	return 0;
}
