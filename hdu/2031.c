/*
 * =====================================================================================
 *
 *       Filename:  2031.c
 *
 *    Description:  
 *    Problem Description
 *    输入一个十进制数N，将它转换成R进制数输出。
 *    Input
 *    输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。
 *    Output
 *    为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。
 *    Sample Input
 *    7 2
 *    23 12
 *    -4 3
 *    Sample Output
 *    111
 *    1B
 *    -11
 *
 *    Created:  07/16/2014 15:20:25
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,r,i,j,flag,tmp,a[50];
	while(scanf("%d%d",&n,&r)!=EOF){
		if(n<0){
			n=-n;
			putchar('-');
		}
		i=0;
		while(1){
			a[i++]=n%r;
			n/=r;
			if(!n)
				break;
		}
		for(j=i-1;j>=0;--j){
			if(a[j]<10)
				printf("%d",a[j]);
			else
				printf("%c",a[j]-10+'A');
		}
		putchar('\n');
	}
	return 0;
}

/*
 * SB烂题
 * n只能设为int
 * 用long或是其他的都WA
 * 他妈的！！！
 */
