/*
 * =====================================================================================
 *
 *       Filename:  1412.c
 *
 *    Description:  
 *    Problem Description
 *    给你两个集合，要求{A} + {B}.
 *    注:同一个集合中不会有两个相同的元素.
 *    Input
 *    每组输入数据分为三行,第一行有两个数字n,m(0<n,m<=10000),分别表示集合A和集合B的元素个数.后两行分别表示集合A和集合B.每个元素为不超出int范围的整数,每个元素之间有一个空格隔开.
 *    Output
 *    针对每组数据输出一行数据,表示合并后的集合,要求从小到大输出,每个元素之间有一个空格隔开.
 *    Sample Input
 *    1 2
 *    1
 *    2 3
 *    1 2
 *    1
 *    1 2
 *    Sample Output
 *    1 2 3
 *    1 2
 *
 *        Version:  1.0
 *        Created:  04/13/2014 21:08:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a,b,i,j,k,t,sign;
	while(scanf("%d%d",&a,&b)!=EOF){
		int c[20000];
		for(i=0;i<a;i++)
			scanf("%d",&c[i]);
		for(i=0,k=0;i<b;i++){
			scanf("%d",&t);
			for(j=0,sign=1;j<a;j++)
				if(t==c[j]){
					sign=0;
					break;
				}
			if(sign){
				k++;
				c[a-1+k]=t;
			}
		}
		for(i=0;i<a+k-1;i++)
			for(j=0;j<a+k-1-i;j++)
				if(c[j]>c[j+1]){
					t=c[j];
					c[j]=c[j+1];
					c[j+1]=t;
				}
		for(i=0;i<a+k;i++)
			printf("%d%s",c[i],(i==a+k-1)?"\n":" ");
	}
	return 0;
}
