/*
 * =====================================================================================
 *
 *       Filename:  1047.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/24/2015 13:50:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
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
