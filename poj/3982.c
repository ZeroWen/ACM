/*
 * =====================================================================================
 *
 *       Filename:  3982.c
 *
 *    Description:  
 *    数列A满足An = An-1 + An-2 + An-3, n >= 3
 *    编写程序，给定A0, A1 和 A2, 计算A99
 *    Input
 *    输入包含多行数据
 *    每行数据包含3个整数A0, A1, A2 (0 <= A0, A1, A2 <= 32767)
 *    数据以EOF结束
 *    Output
 *    对于输入的每一行输出A99的值
 *    Sample Input
 *    1 1 1
 *    Sample Output
 *    69087442470169316923566147
 *
 *        Created:  03/20/2015 23:14:33
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
		swap(str[i],str[len-1-i]);
}
void add(char *sum,char *str){
	int i,sign=0,len_sum=strlen(sum),len_str=strlen(str);
	int len_max=(len_sum>len_str)?len_sum:len_str;
	int len_min=(len_max==len_sum)?len_str:len_sum;
	char *p=(len_sum>len_str)?str:sum;
	str_rev(sum);str_rev(str);
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
	int i;
	char a[200],b[200],c[200],sum[200];
	while(scanf("%s%s%s",a,b,c)!=EOF){
		for(i=0;i<97;++i){
			strcpy(sum,"0");
			add(sum,a);
			add(sum,b);
			add(sum,c);
			strcpy(a,b);
			strcpy(b,c);
			strcpy(c,sum);
			//printf("i=%d\nsum=%s\n",i,sum);
		}
		printf("%s\n",sum);
	}
	return 0;
}
