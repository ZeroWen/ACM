/*
 * =====================================================================================
 *
 *       Filename:  4813.c
 *
 *    Description:  
 *    Some strange code is sent to Da Shan High School. It's said to be the prophet's note. The note is extremely hard to understand. However, Professor Meng is so smart that he successfully found the pattern of the code. That is, the length of the code is the product of two prime numbers. He tries to reallocate the code into a grid of size N*M, where M is the bigger prime. In specific, he writes down the letters of the code to the cells one by one, from left to right, and from top to button. In this way, he found the code eventually readable.
 *    Professor Meng wants to know all the secrets of the note right now. But he doesn't take his computer with him. Can you help him?
 *    Input
 *    The first line of the input is L (L ≤ 1000), which means the number of test cases.
 *    For each test case, the first line contains two prime numbers, which indicates N, M (0 < N * M ≤ 1000) as describe above. The second line contains a string, i.e., the code, containing only lowercase letters. It’s guaranteed the length of the string equals to N * M.
 *    Output
 *    For each test case, output N lines, each line with M letters representing the readable code after the reallocation.
 *    Sample Input
 *    1
 *    2 5
 *    klmbbileay
 *    Sample Output
 *    klmbb
 *    ileay
 *
 *        Created:  05/05/2014 22:57:37
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int l,n,m,i;
	char s[1000];
	while(scanf("%d",&l)!=EOF)
		while(l--){
			scanf("%d%d",&n,&m);
			scanf("%s",s);
			for(i=0;s[i]!='\0';i++)
				printf("%c%s",s[i],((i+1)%m==0)?"\n":"");
		}
	return 0;
}
