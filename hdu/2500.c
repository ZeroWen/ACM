/*
 * =====================================================================================
 *
 *       Filename:  2500.c
 *
 *    Description:  
 *    Problem Description
 *    做人要有一身正气，杭电学子都应该如此。比如我们今天的考试就应该做到“诚信”为上。
 *    每次考试的第一个题目总是很简单，今天也不例外，本题是要求输出指定大小的"HDU"字符串，特别地，为了体现“正气”二字，我们要求输出的字符串也是正方形的（行数和列数相等）。
 *    Input
 *    输入的第一行包含一个正整数N（N<=20），表示一共有N组数据，接着是N行数据，每行包含一个正整数M（M<=50），表示一行内有M个“HDU”相连。
 *    Output
 *    输出指定大小的方形字符串，输出格式参见样本数据。
 *    Sample Input
 *    2
 *    1
 *    2
 *    Sample Output
 *    HDU
 *    HDU
 *    HDU
 *    HDUHDU
 *    HDUHDU
 *    HDUHDU
 *    HDUHDU
 *    HDUHDU
 *    HDUHDU
 *
 *        Created:  04/16/2014 17:31:48
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,j;
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%d",&m);
			for(i=0;i<3*m;i++)
				for(j=0;j<m;j++)
					printf("HDU%s",(j==m-1)?"\n":"");
		}
	return 0;
}
