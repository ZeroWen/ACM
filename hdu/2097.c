/*
 * =====================================================================================
 *
 *       Filename:  2097.c
 *
 *    Description:  
 *    Problem Description
 *    Sky从小喜欢奇特的东西，而且天生对数字特别敏感，一次偶然的机会，他发现了一个有趣的四位数2992，这个数，它的十进制数表示，其四位数字之和为2+9+9+2=22，它的十六进制数BB0，其四位数字之和也为22，同时它的十二进制数表示1894，其四位数字之和也为22，啊哈，真是巧啊。Sky非常喜欢这种四位数，由于他的发现，所以这里我们命名其为Sky数。但是要判断这样的数还是有点麻烦啊，那么现在请你帮忙来判断任何一个十进制的四位数，是不是Sky数吧。
 *    Input
 *    输入含有一些四位正整数，如果为0，则输入结束。
 *    Output
 *    若n为Sky数，则输出“#n is a Sky Number.”，否则输出“#n is not a Sky Number.”。每个结果占一行。注意：#n表示所读入的n值。
 *    Sample Input
 *    2992
 *    1234
 *    0
 *    Sample Output
 *    2992 is a Sky Number.
 *    1234 is not a Sky Number.
 *
 *    Created:  06/23/2014 23:47:22
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int sumofNS(int n,int r){
	int sum=0;
	while(n){
		sum+=n%r;
		n/=r;
	}
	return sum;
}
int main(){
	int n,flag;
	while(scanf("%d",&n),n){
		flag=(sumofNS(n,10)==sumofNS(n,16)&&sumofNS(n,10)==sumofNS(n,12));
		printf("%d is%s a Sky Number.\n",n,flag?"":" not");
	}
	return 0;
}
