/*
 * =====================================================================================
 *
 *       Filename:  3168.c
 *
 *    Description:  
 *    Given a string of no more than 1000 characters. You are supposed to sort the characters into a substring of all Z's followed by O's, J's, 7's, and the rest of the other characters.
 *    Input
 *    Each case gives a string described by the problem. The string given contains no space.
 *    Output
 *    For each test case, output the resulting string. Note the order of the characters other than Z, O, J and 7 must be kept after sorting.
 *    Sample Input
 *    t7ZJ7OhO7B7O7irZtOhZdayJ77
 *    Sample Output
 *    ZZZOOOOJJ7777777thBirthday
 *
 *        Created:  05/10/2014 16:58:10
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char c[1000];
	int i,z,o,j,seven;
	while(scanf("%s",c)!=EOF){
		for(i=z=o=j=seven=0;c[i]!='\0';i++)
			if(c[i]=='Z')
				z++;
			else if(c[i]=='O')
				o++;
			else if(c[i]=='J')
				j++;
			else if(c[i]=='7')
				seven++;
		for(;z;z--)
			putchar('Z');
		for(;o;o--)
			putchar('O');
		for(;j;j--)
			putchar('J');
		for(;seven;seven--)
			putchar('7');
		for(i=0;c[i]!='\0';i++)
			if(c[i]!='Z'&&c[i]!='O'&&c[i]!='J'&&c[i]!='7')
				putchar(c[i]);
		putchar('\n');
	}
	return 0;
}
