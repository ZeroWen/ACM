/*
 * =====================================================================================
 *
 *       Filename:  2389.c
 *
 *    Description:  
 *    Bulls are so much better at math than the cows. They can multiply huge integers together and get perfectly precise answers ... or so they say. Farmer John wonders if their answers are correct. Help him check the bulls' answers. Read in two positive integers (no more than 40 digits each) and compute their product. Output it as a normal number (with no extra leading zeros).
 *    FJ asks that you do this yourself; don't use a special library function for the multiplication.
 *    Input
 *    * Lines 1..2: Each line contains a single decimal number.
 *    Output
 *    * Line 1: The exact product of the two input lines
 *    Sample Input
 *    11111111111111
 *    1111111111
 *    Sample Output
 *    12345679011110987654321
 *
 *        Created:  03/20/2015 00:31:06
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define swap(a,b){int t=a;a=b;b=t;}
void multiply(char *c,char *a,char *b){
	memset(c,'0',100);
	int i,j,k,len1=strlen(a),len2=strlen(b),flag,ab;
	for(i=len1-1;i>=0;--i){
		for(j=len2-1,flag=0;j>=0;--j){
			ab=(a[i]-'0')*(b[j]-'0');
			k=len1+len2-2-i-j;
			c[k]+=ab%10+flag;
			flag=(c[k]-'0')/10+ab/10;
			c[k]=(c[k]-'0')%10+'0';
		}
		c[k+1]+=flag;
	}
	c[k+((flag)?2:1)]='\0';
	for(i=strlen(c)-1;c[i]=='0'&&i!=0;--i);
	c[i+1]='\0';
	int len=strlen(c);
	for(i=0;i<len/2;++i)
		swap(c[i],c[len-1-i]);
}
int main(){
	char a[42],b[42],c[100];
	scanf("%s%s",a,b);
	multiply(c,a,b);
	printf("%s\n",c);
	return 0;
}
