/*
 * =====================================================================================
 *
 *       Filename:  2131.c
 *
 *    Description:  
 *    Problem Description
 *    Mickey is interested in probability recently. One day , he played a game which is about probability with mini.First mickey gives a letter and a word to mini.Then mini calculate the probability that the letter appears in the word.For example,give you the letter "a" and the word "apple". the probability of this case is 0.20000.
 *    Input
 *    The input contains several test cases. Each test case consists of a letter and a word.The length of the word is no longer than 200.
 *    Output
 *    For each test case, print the probability rounded to five digits after the decimal point.
 *    Sample Input
 *    a apple
 *    c Candy
 *    a banana
 *    Sample Output
 *    0.20000
 *    0.20000
 *    0.50000
 *
 *    Created:  07/11/14 16:22:43
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int letter(int c){
	int r=c+32;
	if(c>='a'&&c<='z')
		r-=64;
	return r;
}
int main(){
	char c,word[202];
	int i,j;
	while(scanf("%c %s",&c,word)!=EOF){
		getchar();
		for(i=j=0;word[i]!='\0';++i)
			if(word[i]==c||word[i]==letter(c))
				j++;
		printf("%.5lf\n",(double)j/(double)i);
	}
	return 0;
}
