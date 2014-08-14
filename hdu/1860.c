/*
 * =====================================================================================
 *
 *       Filename:  1860.c
 *
 *    Description:  
 *    Problem Description
 *    统计一个给定字符串中指定的字符出现的次数
 *    Input
 *    测试输入包含若干测试用例，每个测试用例包含2行，第1行为一个长度不超过5的字符串，第2行为一个长度不超过80的字符串。注意这里的字符串包含空格，即空格也可能是要求被统计的字符之一。当读到'#'时输入结束，相应的结果不要输出。
 *    Output
 *    对每个测试用例，统计第1行中字符串的每个字符在第2行字符串中出现的次数，按如下格式输出：
 *    c0 n0
 *    c1 n1
 *    c2 n2
 *    ... 
 *    其中ci是第1行中第i个字符，ni是ci出现的次数。
 *    Sample Input
 *    I
 *    THIS IS A TEST
 *    i ng
 *    this is a long test string
 *    #
 *    Sample Output
 *    I 2
 *    i 3
 *      5
 *    n 2
 *    g 2 
 *    注：第2个测试用例中，空格也是被统计的字符之一。 
 *
 *    Created:  08/14/2014 16:23:57
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char c,key[6];
	while(1){
		int count[5]={0},i=0,j;
		while((c=getchar())!='\n'&&c!='#')
			key[i++]=c;
		if(c=='#')
			break;
		while((c=getchar())!='\n')
			for(j=0;j<i;j++)
				if(c==key[j])
					++count[j];
		for(j=0;j<i;j++)
			printf("%c %d\n",key[j],count[j]);
	}
	return 0;
}
