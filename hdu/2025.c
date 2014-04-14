/*
 * =====================================================================================
 *
 *       Filename:  2025.c
 *
 *    Description:  
 *    Problem Description
 *    对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。
 *    Input
 *    输入数据包括多个测试实例，每个实例由一行长度不超过100的字符串组成，字符串仅由大小写字母构成。
 *    Output
 *    对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"。
 *    Sample Input
 *    abcdefgfedcba
 *    xxxxx
 *    Sample Output
 *    abcdefg(max)fedcba
 *    x(max)x(max)x(max)x(max)x(max)
 *
 *        Version:  1.0
 *        Created:  04/14/2014 16:57:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char str[101],max;
	int i;
	while(scanf("%s",str)!=EOF){
		max=str[0];
		for(i=0;str[i]!='\0';i++)
			if(str[i]>max)
				max=str[i];
		for(i=0;str[i]!='\0';i++){
			putchar(str[i]);
			if(str[i]==max)
				printf("(max)");
		}
		putchar('\n');
	}
	return 0;
}

//果然被我猜中了
//垃圾题
//题意没说清楚
//不过幸亏没中套
