/*
 * =====================================================================================
 *
 *       Filename:  1002.c
 *
 *    Description:  
 *    Problem Description
 *    I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.
 *    Input
 *    The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
 *    Output
 *    For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
 *    Sample Input
 *    2
 *    1 2
 *    112233445566778899 998877665544332211
 *    Sample Output
 *    Case 1:
 *    1 + 2 = 3
 *    Case 2:
 *    112233445566778899 + 998877665544332211 = 1111111111111111110
 *
 *        Created:  04/22/2014 18:32:50
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>
int main(){
	char a[10000],n[10000],t[10000];
	int i,s,m,c,n1,j=0,n2;
	while(scanf("%d",&n1)!=EOF)
		for(n2=n1,j=0;n1--;){
			scanf("%s%s",a,n);
			getchar();
			s=strlen(a)-1;
			m=strlen(n)-1;
			for(i=0;s>=0||m>=0;i++,s--,m--){
				c=0;
				if(s>=0&&m>=0)
					t[i]=n[m]+a[s]+c-'0';
				if(s>=0&&m<0)
					t[i]=a[s]+c;
				if(s<0&&m>=0)
					t[i]=n[m]+c;
				if(t[i]>'9'){
					c=1;
					t[i]-=10;
				}
			}
			printf("Case %d:\n",++j);
			printf("%s + %s = ",a,n);    
			if(c==1)
				printf("%d",c);
			while(i--)
				printf("%c",t[i]);
			printf("\n%s",(j!=n2)?"\n":"");
		}
	return 0;
}
