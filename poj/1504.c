/*
 * =====================================================================================
 *
 *       Filename:  1504.c
 *
 *    Description:  
 *    The Antique Comedians of Malidinesia prefer comedies to tragedies. Unfortunately, most of the ancient plays are tragedies. Therefore the dramatic advisor of ACM has decided to transfigure some tragedies into comedies. Obviously, this work is very hard because the basic sense of the play must be kept intact, although all the things change to their opposites. For example the numbers: if any number appears in the tragedy, it must be converted to its reversed form before being accepted into the comedy play.
 *    Reversed number is a number written in arabic numerals but the order of digits is reversed. The first digit becomes last and vice versa. For example, if the main hero had 1245 strawberries in the tragedy, he has 5421 of them now. Note that all the leading zeros are omitted. That means if the number ends with a zero, the zero is lost by reversing (e.g. 1200 gives 21). Also note that the reversed number never has any trailing zeros.
 *    ACM needs to calculate with reversed numbers. Your task is to add two reversed numbers and output their reversed sum. Of course, the result is not unique because any particular number is a reversed form of several numbers (e.g. 21 could be 12, 120 or 1200 before reversing). Thus we must assume that no zeros were lost by reversing (e.g. assume that the original number was 12).
 *    Input
 *    The input consists of N cases. The first line of the input contains only positive integer N. Then follow the cases. Each case consists of exactly one line with two positive integers separated by space. These are the reversed numbers you are to add.
 *    Output
 *    For each case, print exactly one line containing only one integer - the reversed sum of two reversed numbers. Omit any leading zeros in the output.
 *    Sample Input
 *    3
 *    24 1
 *    4358 754
 *    305 794
 *    Sample Output
 *    34
 *    1998
 *    1
 *
 *        Created:  03/21/2015 00:50:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define swap(a,b) {int t=a;a=b;b=t;}
void str_rev(char *str){
	int i,len=strlen(str);
	for(i=0;i<len/2;++i)
		swap(str[i],str[len-i-1]);
}
void add(char *sum,char *a){
	char str[100];strcpy(str,a);
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
	int i,t;
	char a[100],b[100],sum[100];
	scanf("%d",&t);
	while(t--){
		scanf("%s%s",a,b);
		strcpy(sum,"0");
		str_rev(a);str_rev(b);
		add(sum,a);
		add(sum,b);
		str_rev(sum);
		for(i=0;sum[i]=='0';++i);
		char *p=sum+i;
		printf("%s\n",p);
	}
	return 0;
}
