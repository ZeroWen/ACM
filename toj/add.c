/*
 * =====================================================================================
 *
 *       Filename:  add.c
 *
 *    Description:  

 给两个正整数A和B,输出它们的和C = A + B。

 输入
 共计一行,含两个正整数 A 和 B。

 输出
 共计一行,含一个正整数,即 A 与 B 之和 C。

 输入样例
 100 200
 输出样例
 300  
 *
 *        Version:  1.0
 *        Created:  03/30/2014 22:35:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		printf("%d\n",a+b);
	return 0;
}
