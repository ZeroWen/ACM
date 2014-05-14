/*
 * =====================================================================================
 *
 *       Filename:  3785.c
 *
 *    Description:  
 *    Problem Description
 *    浙江桐乡乌镇共有n个人,请找出该镇上的前m个大富翁.
 *    Input
 *    输入包含多组测试用例.
 *    每个用例首先包含2个整数n（0<n<=100000）和m(0<m<=10)，其中: n为镇上的人数，m为需要找出的大富翁数, 接下来一行输入镇上n个人的财富值.
 *    n和m同时为0时表示输入结束.
 *    Output
 *    请输出乌镇前m个大富翁的财产数，财产多的排前面，如果大富翁不足m个，则全部输出,每组输出占一行.
 *    Sample Input
 *    3 1
 *    2 5 -1
 *    5 3
 *    1 2 3 4 5
 *    0 0
 *    Sample Output
 *    5
 *    5 4 3
 *
 *        Created:  05/14/2014 16:50:44
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,j,a[100000],p,t;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(!n&&!m)
			break;
		if(m>n)
			m=n;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<m;i++){
			p=i;
			for(j=p+1;j<n;j++)
				if(a[p]<a[j])
					p=j;
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
		for(i=0;i<m;i++)
			printf("%d%c",a[i],(i==m-1)?'\n':' ');
	}
	return 0;
}
