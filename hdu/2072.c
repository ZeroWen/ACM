/*
 * =====================================================================================
 *
 *       Filename:  2072.c
 *
 *    Description:  
 *    Problem Description
 *    lily的好朋友xiaoou333最近很空，他想了一件没有什么意义的事情，就是统计一篇文章里不同单词的总数。下面你的任务是帮助xiaoou333解决这个问题。
 *    Input
 *    有多组数据，每组一行，每组就是一篇小文章。每篇小文章都是由小写字母和空格组成，没有标点符号，遇到#时表示输入结束。
 *    Output
 *    每组只输出一个整数，其单独成行，该整数代表一篇文章里不同单词的总数。
 *    Sample Input
 *    you are my friend
 *    #
 *    Sample Output
 *    4
 *
 *        Created:  04/24/2014 23:57:01
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAXN 1005
char a[MAXN][MAXN],sentence[MAXN],word[MAXN];
int main(){
	while(gets(sentence)!=NULL){
		if(sentence[0]=='#')
			break;
		int n=0,i,j;
		for(i=0;i<strlen(sentence);++i){
			while(sentence[i]==' ')
				++i;
			if(i==strlen(sentence))
				break;
			for(j=i;sentence[j]>='a'&&sentence[j]<='z';++j)
				word[j-i]=sentence[j];
			word[j-i]='\0';
			i=j;
			for(j=0;j<n;++j)
				if(!strcmp(a[j],word))
					break;
			if(j==n)
				strcpy(a[n++],word);
		}
		printf("%d\n",n);
    }
	return 0;
}
