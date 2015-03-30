/*
 * =====================================================================================
 *
 *       Filename:  1102.c
 *
 *    Description:  
 *    A friend of you has just bought a new computer. Until now, the most powerful computer he ever used has been a pocket calculator. Now, looking at his new computer, he is a bit disappointed, because he liked the LC-display of his calculator so much. So you decide to write a program that displays numbers in an LC-display-like style on his computer.
 *    Input
 *    The input contains several lines, one for each number to be displayed. Each line contains two integers s, n (1 <= s <= 10, 0 <= n <= 99 999 999), where n is the number to be displayed and s is the size in which it shall be displayed.
 *    The input file will be terminated by a line containing two zeros. This line should not be processed.
 *    Output
 *    Output the numbers given in the input file in an LC-display-style using s "-" signs for the horizontal segments and s "|" signs for the vertical ones. Each digit occupies exactly s+2 columns and 2s+3 rows. (Be sure to fill all the white space occupied by the digits with blanks, also for the last digit.) There has to be exactly one column of blanks between two digits.
 *    Output a blank line after each number. (You will find a sample of each digit in the sample output.)
 *    Sample Input
 *    2 12345
 *    3 67890
 *    0 0
 *    Sample Output
 *         --   --        -- 
 *      |    |    | |  | | 
 *      |    |    | |  | | 
 *         --   --   --   -- 
 *      | |       |    |    |
 *      | |       |    |    |
 *         --   --        -- 
 *
 *    ---   ---   ---   ---   --- 
 *   |         | |   | |   | |   |
 *   |         | |   | |   | |   |
 *   |         | |   | |   | |   |
 *    ---         ---   --- 
 *   |   |     | |   |     | |   |
 *   |   |     | |   |     | |   |
 *   |   |     | |   |     | |   |
 *    ---         ---   ---   ---
 *
 *        Created:  03/30/2015 18:28:18
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int key[10][7]={{1,1,1,0,1,1,1},{0,0,1,0,0,1,0},{1,0,1,1,1,0,1},{1,0,1,1,0,1,1},{0,1,1,1,0,1,0},{1,1,0,1,0,1,1},{1,1,0,1,1,1,1},{1,0,1,0,0,1,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
char str[10];
void foo1(int len,int s,int flag){
	int i,j;
	for(i=0;i<len;++i){
		printf(" %s",i?" ":"");
		for(j=0;j<s;++j)
			printf("%s",key[str[i]-'0'][flag]?"-":" ");
		printf(" ");
	}
	printf("\n");
}
void foo2(int len,int s,int flag1,int flag2){
	int i,j,k;
	for(i=0;i<s;++i){
		for(j=0;j<len;++j){
			printf("%s",j?" ":"");
			printf("%s",key[str[j]-'0'][flag1]?"|":" ");
			for(k=0;k<s;++k)
				printf(" ");
			printf("%s",key[str[j]-'0'][flag2]?"|":" ");
		}
		printf("\n");
	}
}
int main(){
	int s,i,j,k,len;
	while(scanf("%d%s",&s,str)!=EOF){
		if(!s)
			break;
		len=strlen(str);
		foo1(len,s,0);
		foo2(len,s,1,2);
		foo1(len,s,3);
		foo2(len,s,4,5);
		foo1(len,s,6);
		printf("\n");
	}
	return 0;
}
