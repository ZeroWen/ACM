/*
 * =====================================================================================
 *
 *       Filename:  2074.c
 *
 *    Description:  
 *    Problem Description
 *    需要的时候，就把一个个大小差一圈的筐叠上去，使得从上往下看时，边筐花色交错。这个工作现在要让计算机来完成，得看你的了。
 *    Input
 *    输入是一个个的三元组，分别是，外筐尺寸n（n为满足0<n<80的奇整数），中心花色字符，外筐花色字符，后二者都为ASCII可见字符；
 *    Output
 *    输出叠在一起的筐图案，中心花色与外筐花色字符从内层起交错相叠，多筐相叠时，最外筐的角总是被打磨掉。叠筐与叠筐之间应有一行间隔。
 *    Sample Input
 *    11 B A
 *    5 @ W
 *    Sample Output
 *     AAAAAAAAA 
 *    ABBBBBBBBBA
 *    ABAAAAAAABA
 *    ABABBBBBABA
 *    ABABAAABABA
 *    ABABABABABA
 *    ABABAAABABA
 *    ABABBBBBABA
 *    ABAAAAAAABA
 *    ABBBBBBBBBA
 *     AAAAAAAAA 
 *
 *     @@@ 
 *    @WWW@
 *    @W@W@
 *    @WWW@
 *     @@@ 
 *
 *    Created:  07/07/14 23:15:38
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
void init(int n,char b){
	int i;
	putchar(' ');
	for(i=0;i<n-2;++i)
		putchar(b);
	printf(" \n");
}
void foo(int count,char *c){
	int j;
	for(j=count-1;j>=0;--j)
		printf("%c",c[j]);
	putchar('\n');
}
int main(){
	int n,i,j,count,flag=0;
	char a,b,c[45],tmp;
	while(scanf("%d %c %c",&n,&a,&b)!=EOF){
		tmp=(n/2)%2?b:a;
		if(flag)
			putchar('\n');
		flag=1;
		if(n==1){
			printf("%c\n",a);
			continue;
		}
		init(n,tmp);
		c[0]=tmp;
		c[1]='\0';
		for(i=0,count=1;i<(n-2)/2;++i){
			c[count++]=((n/2+i)%2)?a:b;
			c[count]='\0';
			printf("%s",c);
			for(j=0;j<(n-count*2);++j)
				printf("%c",((n/2+i)%2)?a:b);
			foo(count,c);
		}
		printf("%s%c",c,a);
		foo(count,c);
		for(i=0;i<(n-2)/2;++i){
			c[--count]='\0';
			printf("%s",c);
			for(j=0;j<(n-count*2);++j)
				printf("%c",(i%2)?a:b);
			foo(count,c);
		}
		init(n,tmp);
	}
	return 0;
}
