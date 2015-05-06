/*
 * =====================================================================================
 *
 *       Filename:  2636.c
 *
 *    Description:  
 *    Installing software in Windows is a piece of cake: just download and install the software, then you can use it. Although installing a software in Linux only needs typing yum install thename in the command lines in some Linux distribution,especially Fedora/Red Hat,it requires a lot extra time in a process called resolving dependency(means the period of downloading the other packages it depends on in order to install itself completely and successfully).
 *    The problem is designed like this:
 *    Suppose Samuel needs to install software A,A depends on B,C,D,E,and Samuel has already installed package E in his system so in the command lines there only will appear the packages B,C,D,we can say it needs 3 packages to finish the installation.
 *    Input
 *    The number of test cases t,each of the case has an integer m means m packages to depend on if want to install X successfully and completely. Then the next line will contain m(m<=26 the letters are A-Z only) letters represent the name of each packages. The an integer n(n<=26 the letters are A-Z only too),means n packages have been installed in the desktop of Samuel.
 *    Output
 *    Your task is to output how many packages Samuel needs to install in the process of resolving dependency except the ones have already been installed,and display their names using the format (if s>0,s the number of the packages) like this:”Samuel has to install another s package(s) in addition,the packages is/are *,*.”(use , between the two names)or(s=0)”Samuel can install the software without installing anything else.”
 *    Sample Input
 *    3
 *    3
 *    A B C
 *    2
 *    A B
 *    5
 *    A B E D F
 *    3
 *    A B F
 *    2
 *    A B
 *    2
 *    A B
 *    Sample Output
 *    Samuel has to install another 1 package(s) in addition,the packages is/are C.
 *    Samuel has to install another 2 package(s) in addition,the packages is/are E,D.
 *    Samuel can install the software without installing anything else.
 *
 *        Created:  05/07/2015 01:39:02
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	int t,i,m,n,count,a[26],vi[26];
	char tmp,str[26];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		memset(vi,0,sizeof(vi));
		for(i=0;i<m;++i){
			getchar();
			scanf("%c",&tmp);
			a[i]=tmp;
		}
		scanf("%d",&n);
		for(i=0;i<n;++i){
			getchar();
			scanf("%c",&tmp);
			vi[tmp-'A']=1;
		}
		for(i=0,count=0;i<m;++i)
			if(!vi[a[i]-'A']){
				str[count++]=a[i];
			}
		if(count){
			printf("Samuel has to install another %d package(s) in addition,the packages is/are ",count);
			for(i=0;i<count;++i)
				printf("%c%s",str[i],(i==count-1)?".\n":",");
		}
		else
			printf("Samuel can install the software without installing anything else.\n");
	}
	return 0;
}
