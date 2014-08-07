/*
 * =====================================================================================
 *
 *       Filename:  1753.c
 *
 *    Description: 
 *    Problem Description
 *    话说，经过了漫长的一个多月，小明已经成长了许多，所以他改了一个名字叫“大明”。
 *    这时他已经不是那个只会做100以内加法的那个“小明”了，现在他甚至会任意长度的正小数的加法。
 *    现在，给你两个正的小数A和B，你的任务是代表大明计算出A+B的值。
 *    Input
 *    本题目包含多组测试数据，请处理到文件结束。
 *    每一组测试数据在一行里面包含两个长度不大于400的正小数A和B。
 *    Output
 *    请在一行里面输出输出A+B的值，请输出最简形式。详细要求请见Sample Output。
 *    Sample Input
 *    1.1 2.9
 *    1.1111111111 2.3444323343
 *    1 1.1
 *    Sample Output
 *    4
 *    3.4555434454
 *    2.1
 *
 *    Created:  08/08/2014 01:02:43
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define max(a,b) (a>b)?a:b
#define min(a,b) (a<b)?a:b
int main(){
	int i,k,m,n,lena,lenb;
	char x[210],y[210],a[210],b[210],c[210],d[210];
	while(scanf("%s%s",x,y)!=EOF){
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		for(i=0;i<strlen(x);i++){
			if(x[i]=='.'){
				x[i]='\0';
				strcpy(a+1,x);
				strcpy(c+1,x+i+1);
				x[i]='.';
				break;
			}
			strcpy(a+1,x);
		}
		for(i=0;i<strlen(y);i++){
			if(y[i]=='.'){
				y[i]='\0';
				strcpy(b+1,y);
				strcpy(d+1,y+i+1);
				y[i]='.';
				break;
			}
			strcpy(b+1,y);
		}
		c[0]=d[0]='X';
		lena=strlen(c)-1;
		lenb=strlen(d)-1;
		m=min(lena,lenb);
		n=max(lena,lenb);
		for(i=1;i<=m;i++){
			y[i]=c[i]+d[i]-2*'0';
		}
		if(lena>lenb)
			for(i=m+1;i<=n;i++)
				y[i]=c[i]-'0';
		else
			for(i=m+1;i<=n;i++)
				y[i]=d[i]-'0';
		for(y[0]=0,i=n;i>0;i--){
			if(y[i]>9){
				y[i]-=10;
				y[i-1]++;
			}
		}
		k=n;
		a[0]=b[0]='X';
		lena=strlen(a)-1;
		lenb=strlen(b)-1;
		m=min(lena,lenb);
		n=max(lena,lenb);
		x[0]='X';
		for(i=1;i<=n-m;i++)
			x[i]='0';
		x[i]='\0';
		if(lena>lenb){
			strcat(x,b+1);
			for(i=1;i<=lena;i++)
				x[i]=a[i]+x[i]-2*'0';
		}
		else{
			strcat(x,a+1);
			for(i=1;i<=lenb;i++)
				x[i]=b[i]+x[i]-2*'0';
		}
		x[n]+=y[0];
		for(x[0]=0,i=n;i>0;i--)	
			if(x[i]>9){
				x[i]-=10;
				x[i-1]++;
			}
		if(x[0]!=0)
			printf("%d",x[0]);
		for(i=1;i<=n;i++)
			printf("%d",x[i]);
		for(i=k;i>0;i--){
			if(y[i]!=0)
				break;
			k=i-1;
		}
		if(i)
			printf(".");
		for(i=1;i<=k;i++)
			printf("%d",y[i]);
		printf("\n");
	}
	return 0;
}
