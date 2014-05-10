/*
 * =====================================================================================
 *
 *       Filename:  3783.c
 *
 *    Description:  
 *    Problem Description
 *    读入一个字符串，字符串中包含ZOJ三个字符，个数不一定相等，按ZOJ的顺序输出，当某个字符用完时，剩下的仍然按照ZOJ的顺序输出。
 *    Input
 *    题目包含多组用例,每组用例占一行，包含ZOJ三个字符，当输入“E”时表示输入结束。
 *    1<=length<=100。
 *    Output
 *    对于每组输入,请输出一行，表示按照要求处理后的字符串。
 *    具体可见样例。
 *    Sample Input
 *    ZZOOOJJJ
 *    ZZZZOOOOOJJJ
 *    ZOOOJJ
 *    E
 *    Sample Output
 *    ZOJZOJOJ
 *    ZOJZOJZOJZOO
 *    ZOJOJO
 *
 *        Created:  05/10/2014 14:39:37
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char c;
	int z,o,j;
	while(1){
		z=o=j=0;
		while((c=getchar())!='\n')
			if(c=='Z')
				z++;
			else if(c=='O')
				o++;
			else if(c=='J')
				j++;
			else if(c=='E')
				return 0;
		while(z||o||j){
			if(z){
				putchar('Z');
				z--;
			}
			if(o){
				putchar('O');
				o--;
			}
			if(j){
				putchar('J');
				j--;
			}
		}
		putchar('\n');
	}
	return 0;
}
