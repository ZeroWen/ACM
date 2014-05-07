/*
 * =====================================================================================
 *
 *       Filename:  4730.c
 *
 *    Description:  
 *    Problem Description
 *    Chikami Nanako is a girl living in many different parallel worlds. In this problem we talk about one of them.
 *    In this world, Nanako has a special habit. When talking with others, she always ends each sentence with "nanodesu".
 *    There are two situations:
 *    If a sentence ends with "desu", she changes "desu" into "nanodesu", e.g. for "iloveyoudesu", she will say "iloveyounanodesu". Otherwise, she just add "nanodesu" to the end of the original sentence.
 *    Given an original sentence, what will it sound like aften spoken by Nanako?
 *    Input
 *    The first line has a number T (T <= 1000) , indicating the number of test cases.
 *    For each test case, the only line contains a string s, which is the original sentence.
 *    The length of sentence s will not exceed 100, and the sentence contains lowercase letters from a to z only.
 *    Output
 *    For every case, you should output "Case #t: " at first, without quotes. The t is the case number starting from 1. Then output which Nanako will say.
 *    Sample Input
 *    2
 *    ohayougozaimasu
 *    daijyoubudesu
 *    Sample Output
 *    Case #1: ohayougozaimasunanodesu
 *    Case #2: daijyoubunanodesu
 *
 *        Created:  05/08/2014 00:18:00
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int t,i=1,j,k;
	char s[101];
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%s",s);
			printf("Case #%d: ",i++);
			j=strlen(s);
			if(s[j-1]=='u'&&s[j-2]=='s'&&s[j-3]=='e'&&s[j-4]=='d')
				for(k=0;k<j-4;k++)
					putchar(s[k]);
			else
				printf("%s",s);
			printf("nanodesu\n");
		}
	return 0;
}
