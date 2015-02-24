/*
 * =====================================================================================
 *
 *       Filename:  1316.c
 *
 *    Description:  
 *    Recall the definition of the Fibonacci numbers:
 *    f1 := 1
 *    f2 := 2
 *    fn := fn-1 + fn-2 (n >= 3)
 *    Given two numbers a and b, calculate how many Fibonacci numbers are in the range [a, b].
 *    Input
 *    The input contains several test cases. Each test case consists of two non-negative integer numbers a and b. Input is terminated by a = b = 0. Otherwise, a <= b <= 10^100. The numbers a and b are given with no superfluous leading zeros.
 *    Output
 *    For each test case output on a single line the number of Fibonacci numbers fi with a <= fi <= b.
 *    Sample Input
 *    10 100
 *    1234567890 9876543210
 *    0 0
 *    Sample Output
 *    5
 *    4
 *
 *        Created:  02/24/2015 18:28:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
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
int compare(char *str1,char *str2){
	int i,len1=strlen(str1),len2=strlen(str2);
	if(len1!=len2)
		return (len1>len2)?1:-1;
	for(i=0;i<len1;++i)
		if(str1[i]!=str2[i])
			return (str1[i]>str2[i]?1:-1);
	return 0;
}
int main(){
	char a[105],b[105];
	while(scanf("%s%s",a,b)!=EOF){
		if(!strcmp(a,"0")&&!strcmp(b,"0"))
			break;
		int count=0;
		char str1[110]="1",str2[110]="1",tmp[110];
		while(compare(str2,b)!=1){
			strcpy(tmp,str2);
			add(str2,str1);
			strcpy(str1,tmp);
			if(compare(str1,a)!=-1&&compare(str1,b)!=1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
