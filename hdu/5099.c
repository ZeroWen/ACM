/*
 * =====================================================================================
 *
 *       Filename:  5099.c
 *
 *    Description:  
 *    As an Android developer, itˇs really not easy to figure out a newer version of two kernels, because Android is updated so frequently and has many branches. Fortunately, Google identifies individual builds with a short build code, e.g. FRF85B.
 *    The first letter is the code name of the release family, e.g. F is Froyo. The code names are ordered alphabetically. The latest code name is K (KitKat).
 *    The second letter is a branch code that allows Google to identify the exact code branch that the build was made from, and R is by convention the primary release branch.
 *    The next letter and two digits are a date code. The letter counts quarters, with A being Q1 2009. Therefore, F is Q2 2010. The two digits count days within the quarter, so F85 is June 24 2010.
 *    Finally, the last letter identifies individual versions related to the same date code, sequentially starting with A; A is actually implicit and usually omitted for brevity.
 *    Please develop a program to compare two Android build numbers.
 *    Input
 *    The first line is an integer n (1 <= n <= 2000), which indicates how many test cases need to process.
 *    Each test case consists of a single line containing two build numbers, separated by a space character.
 *    Output
 *    For each test case, output a single line starting with ¨Case #: 〃 (# means the number of the test case). Then, output the result of release comparison as follows:
 *    ● Print "<" if the release of the first build number is lower than the second one;
 *    ● Print "=" if the release of the first build number is same as he second one;
 *    ● Print ">" if the release of the first build number is higher than the second one.
 *    Continue to output the result of date comparison as follows:
 *    ● Print "<" if the date of the first build number is lower than the second one;
 *    ● Print "=" if the date of the first build number is same as he second one;
 *    ● Print ">" if the date of the first build number is higher than the second one.
 *    If two builds are not in the same code branch, just compare the date code; if they are in the same code branch, compare the date code together with the individual version.
 *    Sample Input
 *    2
 *    FRF85B EPF21B
 *    KTU84L KTU84M
 *    Sample Output
 *    Case 1: > >
 *    Case 2: = <
 *
 *        Created:  05/12/2015 23:46:09
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
char judge(char *str1,char *str2){  
	int i;
	for(i=2;i<=4;i++)
		if(str1[i]!=str2[i])
			return str1[i]<str2[i]?'<':'>';
	if(str1[1]==str2[1]){
		char a=(str1[5]=='\0'?'A':str1[5]);
		char b=(str2[5]=='\0'?'A':str2[5]);
		return (a==b?'=':(a<b?'<':'>'));
	}
	return '=';  
} 
int main(){
	char rel,str1[10],str2[10];
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;++i){
		scanf("%s%s",str1,str2);
		if(str1[0]>str2[0])
			rel='>';
		else if(str1[0]<str2[0])
			rel='<';
		else
			rel='=';
		printf("Case %d: %c %c\n",i+1,rel,judge(str1,str2));
	}
	return 0;
}
