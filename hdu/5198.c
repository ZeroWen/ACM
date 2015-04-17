/*
 * =====================================================================================
 *
 *       Filename:  5198.c
 *
 *    Description:  
 *    In Vivid’s school, there is a strange class(SC). In SC, the students’ names are very strange. They are in the same format: anbncn(a,b,c must not be the same with each other). For example studens whose names are“abc”,”ddppqq” are in SC, however studens whose names are “aaa”,“ab”,”ddppqqq” are not in SC.\
 *    Vivid makes friends with so many students, he wants to know who are in SC.
 *    Input
 *    There are multiple test cases (about 10), each case will give a string S which is the name of Vivid’s friend in a single line.
 *    Please process to the end of file.
 *    [Technical Specification]
 *    1≤|S|≤10.
 *    |S| indicates the length of S.
 *    S only contains lowercase letter.
 *    Output
 *    For each case, output YES if Vivid’s friend is the student of SC, otherwise output NO.
 *    Sample Input
 *    abc
 *    bc
 *    Sample Output
 *    YES
 *    NO
 *
 *        Created:  04/17/2015 21:15:30
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char str[15];
	int i,a,b,len;
	while(scanf("%s",str)!=EOF){
		len=strlen(str);
		for(a=1,i=1;str[i]==str[0]&&i<len;++i)
			++a;
		++i;
		for(b=1;str[i]==str[a]&&i<len;++i)
			++b;
		if(a==b&&a==len-a-b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
