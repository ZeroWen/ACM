/*
 * =====================================================================================
 *
 *       Filename:  2635.c
 *
 *    Description:  
 *    Samuel is fed up with Microsoft Windows system. Instead of xp he chose to install Linux Fedora 10 in his own desktop. But Linux has various distributions with different kernel versions. Some kernels are not stable. Of course,the unstable ones is not of Samuel's choice. Samuel is never tired of reinstalling Linux,because he always wants to try the latest release version on his computer. So Samuel needs to know the kernel's version before he downloads the distribution version.
 *    Here is an easy problem for you,tell Samuel which distribution he should choose to reinstall. 
 *    To make the problem easier,suppose each Linux kernel version mark is made up by a string like the format:”r.x.y”Here r represents the major version number,x will be even(stable) or odd(beta version not stable,need to be developed),y represents the time the kernel has been corrected. For instance,the kernel whose number is 2.6.7 is a stable version. However,2.5.11 is not due to the number the letter x represents is odd. 
 *    As for he problem which one is the latest kernel,you can also refer to version number. When compared two version,you should first compare the r1 and r2, if r1>r2 version 1 is the latest version. If r1=r2,you need to compare x1 and x2,if x1>x2 that means the version 1 is the latest. If x1=x2,then you need to compare y1 and y2,version 1 is the newest one only if y1>y2..Not clear about my English explanation,you can see the HDOJ 1976,it has a Chinese one.
 *    Input
 *    The input will consist 2 major parts:
 *    Test cases t.
 *    Each of test case is made up of 2 minor parts:
 *    1.The number of available distributions
 *    2.Name of the distribution(a string,no white blanks)
 *    3.The kernel version(also a string in the format r.x.y without any blanks)
 *    I guarantee there is no test case has the same distribution name but with different kernel version nor the same kernel version but with the different distribution name. All the information in the same test cases is totally different.
 *    Output
 *    Your task is to tell the latest version apart,and output the name of the distribution,using “The latest distribution Samuel will choose is ****.”
 *    Sample Input
 *    2
 *    3
 *    SUSE 2.6.5
 *    Fedora 2.6.7
 *    Ubuntu 2.6.6
 *    4
 *    RedFlag 2.4.5
 *    CentOS 2.5.6
 *    Fedora 2.4.3
 *    Debian 2.5.7
 *    Sample Output
 *    The latest distribution Samuel will choose is Fedora.
 *    The latest distribution Samuel will choose is RedFlag.
 *
 *        Created:  05/06/2015 23:07:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define swap(a,b) {a=a+b;b=a-b;a=a-b;}
typedef struct{
	char str[20];
	int r;
	int x;
	int y;
}LINUX;
LINUX li[1000];
LINUX tmp;
int swapLi(LINUX (*li1),LINUX (*li2)){
	char tmp[20];
	strcpy(tmp,(*li1).str);
	strcpy((*li1).str,(*li2).str);
	strcpy((*li2).str,tmp);
	swap((*li1).r,(*li2).r);
	swap((*li1).x,(*li2).x);
	swap((*li2).y,(*li2).y);
	return 0;
}
int main(){
	int t,i,j,n,max;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0,max=0;i<n;++i){
			scanf("%s%d.%d.%d",tmp.str,&tmp.r,&tmp.x,&tmp.y);
			if(tmp.x%2==0){
				strcpy(li[max].str,tmp.str);
				li[max].r=tmp.r;
				li[max].x=tmp.x;
				li[max].y=tmp.y;
				++max;
			}
		}
		for(i=0;i<max;++i)
			for(j=max-2;j>=i;--j){
				if(li[j].r<li[j+1].r){
					swapLi(&li[j],&li[j+1]);
				}
				else if(li[j].r==li[j+1].r){
					if(li[j].x<li[j+1].x){
						swapLi(&li[j],&li[j+1]);
					}
					else if(li[j].x==li[j+1].x){
						if(li[j].y<li[j+1].y){
							swapLi(&li[j],&li[j+1]);
						}
					}
				}
			}
		printf("The latest distribution Samuel will choose is %s.\n",li[0].str);
	}
	return 0;
}
