/*
 * =====================================================================================
 *
 *       Filename:  2573.c
 *
 *    Description:  
 *    Problem Description
 *    A boy named Pirates who wants to develop typing software finds that it’s hard to judge whether a letter is lowercase or uppercase. He searches lots of information about it, and find out the solution, but he doesn’t know how to realize it. Can you help him?
 *    The Solution:
 *    1: If the caps lock is on, and the letter is typed with shift key down, the letter is lowercase, otherwise it’s uppercase.
 *    2: If the caps lock is off, and the letter is typed with shift key down, the letter is uppercase, otherwise it’s lowercases.
 *    Input
 *    The first line is an integer t, which is the number of test case in the input data file. Each test case begins with an integer n (0<n<=100), which means there follow n lines. For each line, if there is only a letter, it means the key is typed, and if there begins with a string “Shift”, then will follows one letter, it means the letter is typed with shift key, and if there begins with a string “Caps”, it means the caps lock key is typed and changes the mood of caps lock. The entire letter is lowercase. At the beginning of each test case, you can assume that the caps lock is off.
 *    Output
 *    Please output a string which the user typed.
 *    Sample Input
 *    2
 *    5
 *    Caps
 *    a
 *    c
 *    Shift i
 *    Shift t
 *    6
 *    Caps
 *    a
 *    c
 *    Caps
 *    i
 *    t
 *    Sample Output
 *    ACit
 *    ACit
 *
 *        Created:  04/16/2014 22:41:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int t,n,i,j,caps_on,shift_on;
	char out[101];
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d",&n);
			getchar();
			for(i=j=caps_on=0;i<n;i++){
				char str[8];
				gets(str);
				if(strcmp(str,"Caps")==0){
					caps_on=!caps_on;
					continue;
				}
				else{
					shift_on=(str[0]=='S')?1:0;
					if(caps_on){
						if(shift_on)
							out[j++]=str[6];
						else
							out[j++]=str[0]-32;
					}
					else{
						if(shift_on)
							out[j++]=str[6]-32;
						else
							out[j++]=str[0];
					}
				}
			}
			out[j]='\0';
			printf("%s\n",out);
		}
	return 0;
}
