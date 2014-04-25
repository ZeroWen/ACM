/*
 * =====================================================================================
 *
 *       Filename:  1240.c
 *
 *    Description:  
 *    Problem Description
 *    You may have heard of the book '2001 - A Space Odyssey' by Arthur C. Clarke, or the film of the same name by Stanley Kubrick. In it a spaceship is sent from Earth to Saturn. The crew is put into stasis for the long flight, only two men are awake, and the ship is controlled by the intelligent computer HAL. But during the flight HAL is acting more and more strangely, and even starts to kill the crew on board. We don't tell you how the story ends, in case you want to read the book for yourself :-)
 *    After the movie was released and became very popular, there was some discussion as to what the name 'HAL' actually meant. Some thought that it might be an abbreviation for 'Heuristic ALgorithm'. But the most popular explanation is the following: if you replace every letter in the word HAL by its successor in the alphabet, you get ... IBM.
 *    Perhaps there are even more acronyms related in this strange way! You are to write a program that may help to find this out.
 *
 *    Input
 *    The input starts with the integer n on a line by itself - this is the number of strings to follow. The following n lines each contain one string of at most 50 upper-case letters.
 *
 *    Output
 *    For each string in the input, first output the number of the string, as shown in the sample output. The print the string start is derived from the input string by replacing every time by the following letter in the alphabet, and replacing 'Z' by 'A'.
 *
 *    Print a blank line after each test case.
 *
 *    Sample Input
 *    2
 *    HAL
 *    SWERC
 *
 *    Sample Output
 *    String #1
 *    IBM
 *
 *    String #2
 *    TXFSD
 *
 *        Version:  1.0
 *        Created:  04/25/2014 22:12:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
void convert(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++)
		if(str[i]=='Z')
			str[i]='A';
		else
			str[i]+=1;
	printf("%s\n\n",str);
}
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		char str[51];
		for(i=0;i<n;i++){
			scanf("%s",str);
			printf("String #%d\n",i+1);
			convert(str);
		}
	}
	return 0;
}

