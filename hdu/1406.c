/*
 * =====================================================================================
 *
 *       Filename:  1406.c
 *
 *    Description:  
 *    Problem Description
 *    完数的定义：如果一个大于1的正整数的所有因子之和等于它的本身，则称这个数是完数，比如6，28都是完数：6=1+2+3；28=1+2+4+7+14。
 *    本题的任务是判断两个正整数之间完数的个数。
 *    Input
 *    输入数据包含多行，第一行是一个正整数n，表示测试实例的个数，然后就是n个测试实例，每个实例占一行，由两个正整数num1和num2组成,(1<num1,num2<10000) 。
 *    Output
 *    对于每组测试数据，请输出num1和num2之间（包括num1和num2）存在的完数个数。
 *    Sample Input
 *    2
 *    2 5
 *    5 7
 *    Sample Output
 *    0
 *    1
 *
 *    Created:  07/06/14 19:14:21
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,a,b,i,j,tmp,range[4]={6,28,496,8128};
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		for(i=j=0;i<4;++i)
			if(range[i]>=a&&range[i]<=b)
				++j;
		printf("%d\n",j);
	}
	return 0;
}

//忘了a,b大小不是确定的，WA了一次
//附上Python代码
/* 
for i in range( 1, 10000):
	sum = 0
	for j in range( 1, i):
		if i % j == 0:
			sum += j
	if sum == i:
		print i
*/
