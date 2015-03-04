/*
 * =====================================================================================
 *
 *       Filename:  1047.c
 *
 *    Description:  
 *    One of the first users of BIT's new supercomputer was Chip Diller. He extended his exploration of powers of 3 to go from 0 to 333 and he explored taking various sums of those numbers.
 *    ``This supercomputer is great,'' remarked Chip. ``I only wish Timothy were here to see these results.'' (Chip moved to a new apartment, once one became available on the third floor of the Lemon Sky apartments on Third Street.)
 *    Input
 *    The input will consist of at most 100 lines of text, each of which contains a single VeryLongInteger. Each VeryLongInteger will be 100 or fewer characters in length, and will only contain digits (no VeryLongInteger will be negative).
 *    The final input line will contain a single zero on a line by itself.
 *    Output
 *    Your program should output the sum of the VeryLongIntegers given in the input.
 *    This problem contains multiple test cases!
 *    The first line of a multiple input is an integer N, then a blank line followed by N input blocks. Each input block is in the format indicated in the problem description. There is a blank line between input blocks.
 *    The output format consists of N output blocks. There is a blank line between output blocks.
 *    Sample Input
 *    1
 *
 *    123456789012345678901234567890
 *    123456789012345678901234567890
 *    123456789012345678901234567890
 *    0
 *    Sample Output
 *    370370367037037036703703703670
 *    
 *        Created:  02/24/2015 13:50:40
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAXN 1001
void str_rev(char *str){
	int i,len=strlen(str);
	char tmp;
	for(i=0;i<len/2;++i){
		tmp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=tmp;
	}
}
void add(char *sum,char *str){
	int i,sign=0,len_sum=strlen(sum),len_str=strlen(str);
	int len_max=(len_sum>len_str)?len_sum:len_str;
	int len_min=(len_max==len_sum)?len_str:len_sum;
	char *p=(len_sum>len_str)?str:sum;
	str_rev(sum);
	str_rev(str);
	for(i=len_min;i<len_max;++i)
		*(p+i)='0';
	for(i=0;i<len_max;++i){
		sum[i]+=str[i]-'0'+sign;
		sign=(sum[i]>'9');
		sum[i]-=10*sign;
	}
	if(sign)
		sum[i++]='1';
	sum[i]='\0';
	str_rev(sum);
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char str[MAXN],sum[MAXN]="0\0";
		while(scanf("%s",str)!=EOF){
			if(str[0]=='0')
				break;
			else if(str[0]=='\n')
				continue;
			add(sum,str);
		}
		printf("%s%s\n",sum,(!n)?"":"\n");
	}
	return 0;
}
