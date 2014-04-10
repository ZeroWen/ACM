/*
 * =====================================================================================
 *
 *       Filename:  2026.c
 *
 *    Description:  
 *    Problem Description
 *    输入一个英文句子，将每个单词的第一个字母改成大写字母。
 *    Input
 *    输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
 *    Output
 *    请输出按照要求改写后的英文句子。
 *    
 *    Sample Input
 *    i like acm
 *    i want to get an accepted
 *    
 *    Sample Output
 *    I Like Acm
 *    I Want To Get An Accepted
 *
 *        Version:  1.0
 *        Created:  04/10/2014 22:33:03
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int i,sign;
	char str[100];
	while(gets(str)){
		sign=1;
		for(i=0;str[i]!='\0';i++){
			if(sign==1&&str[i]>='a'&&str[i]<='z'){
				str[i]-=32;
				sign--;
			}
			if(sign==1&&str[i]>='A'&&str[i]<='Z')
				sign--;
			if(str[i]==' ')
				sign=1;
		}
		printf("%s\n",str);
	}
	return 0;
}
