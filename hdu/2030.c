/*
 * =====================================================================================
 *
 *       Filename:  2030.c
 *
 *    Description:
 *    Problem Description
 *    统计给定文本文件中汉字的个数。
 *    Input
 *    输入文件首先包含一个整数n，表示测试实例的个数，然后是n段文本。
 *    Output
 *    对于每一段文本，输出其中的汉字的个数，每个测试实例的输出占一行。
 *    [Hint:]从汉字机内码的特点考虑~
 *    Sample Input
 *    2
 *    WaHaHa! WaHaHa! 今年过节不说话要说只说普通话WaHaHa! WaHaHa!
 *    马上就要期末考试了Are you ready?
 *    Sample Output
 *    14
 *    9
 *
 *        Version:  1.0
 *        Created:  04/14/2014 01:58:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int n,c,i;
	char s[1000];
	while(scanf("%d",&n)!=EOF){
		getchar();
		while(n--){
			gets(s);
			c=0;
			for(i=0;i<strlen(s);i++){
				if(s[i]<0)
					c++;
			}
			printf("%d\n",c/2);
		}
	}
	return 0;
}
