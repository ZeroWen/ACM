/*
 * =====================================================================================
 *
 *       Filename:  1592.c
 *
 *    Description:  
 *    Gardon bought many many chocolates from the A Chocolate Market (ACM). When he was on the way to meet Angel, he met Speakless by accident.
 *    "Ah, so many delicious chocolates! I'll get half of them and a half!" Speakless said.
 *    Gardon went on his way, but soon he met YZG1984 by accident....
 *    "Ah, so many delicious chocolates! I'll get half of them and a half!" YZG1984 said.
 *    Gardon went on his way, but soon he met Doramon by accident....
 *    "Ah, so many delicious chocolates! I'll get half of them and a half!" Doramon said.
 *    Gardon went on his way, but soon he met JGShining by accident....
 *    "Ah, so many delicious chocolates! I'll get half of them and a half!" JGShining said.
 *    .
 *    .
 *    .
 *    After had had met N people , Gardon finally met Angel. He gave her half of the rest and a half, then Gardon have none for himself. Could you tell how many chocolates did he bought from ACM?
 *    Input
 *    Input contains many test cases.
 *    Each case have a integer N, represents the number of people Gardon met except Angel. N will never exceed 1000;
 *    Output
 *    For every N inputed, tell how many chocolates Gardon had at first.
 *    Sample Input
 *    2
 *    Sample Output
 *    7
 *
 *        Created:  02/16/2015 02:48:48
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
void add(char *str1,char *str2){
	int i=0,flag=0,len1=strlen(str1),len2=strlen(str2);
	for(;i<len2;++i){
		str1[i]+=str2[i]+flag-'0';
		flag=(str1[i]>'9');
		if(flag)
			str1[i]-=10;
	}
	while(flag){
		if(str1[i]=='\0'){
			str1[i++]='1';
			str1[i]='\0';
			flag=0;
		}
		else
			++str1[i++];
		flag=(str1[i]>'9');
		if(flag)
			str1[i]-=9;
		else
			break;
	}
}
int main(){
	int n,i,len;
	while(scanf("%d",&n)!=EOF){
		char m[303]="1\0";
		for(i=0;i<n;i++){
			add(m,m);
			add(m,"1\0");
		}
		len=strlen(m);
		for(i=len-1;i>=0;--i)
			printf("%c%s",m[i],!i?"\n":"");
	}
	return 0;
}
