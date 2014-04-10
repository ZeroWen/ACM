/*
 * =====================================================================================
 *
 *       Filename:  2032.c
 *
 *    Description:  
 *    Problem Description
 *    还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参考以下的图形：
 *    1
 *    1 1
 *    1 2 1
 *    1 3 3 1
 *    1 4 6 4 1
 *    1 5 10 10 5 1
 *    Input
 *    输入数据包含多个测试实例，每个测试实例的输入只包含一个正整数n（1<=n<=30），表示将要输出的杨辉三角的层数。
 *    Output
 *    对应于每一个输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开，每一个杨辉三角后面加一个空行。
 *    Sample Input
 *    2 3
 *    Sample Output
 *    1
 *    1 1
 *
 *    1
 *    1 1
 *    1 2 1
 *
 *        Version:  1.0
 *        Created:  04/11/2014 00:37:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a[32][32]={{1},{0,1},{0,1,1}},i,j,n;
	while(scanf("%d",&n)!=EOF){
		for(i=1;i<=n;i++)
			for(j=1;j<=i;j++){
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				if(j!=i)
					printf("%d ",a[i][j]);
				else
					printf("%d\n",a[i][j]);
			}
		putchar('\n');
     }
     return 0;
}
