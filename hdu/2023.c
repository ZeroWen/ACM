/*
 * =====================================================================================
 *
 *       Filename:  2023.c
 *
 *    Description:  
 *    Problem Description
 *    假设一个班有n(n<=50)个学生，每人考m(m<=5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。
 *    Input
 *    输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。
 *    Output
 *    对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；第二行包含m个数据，表示m门课的平均成绩，结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
 *    每个测试实例后面跟一个空行。
 *    Sample Input
 *    2 2
 *    5 10
 *    10 20
 *    Sample Output
 *    7.50 15.00
 *    7.50 15.00
 *    1
 *
 *        Version:  1.0
 *        Created:  04/14/2014 00:30:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,m,i,j,s,flag;
	double a[50][5],t,aver_stu[50],aver_sub[5];
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n;i++){
			for(j=0,t=0;j<m;j++){
				scanf("%lf",&a[i][j]);
				t+=a[i][j];
			}
			aver_stu[i]=t/m;
		}
		for(j=0;j<m;j++){
			for(i=0,t=0;i<n;i++)
				t+=a[i][j];
			aver_sub[j]=t/n;
		}
		for(i=flag=0;i<n;i++){
			for(j=s=0;j<m;j++)
				if(a[i][j]>=aver_sub[j])//注意是大于等于
					s++;
			if(s==m)
				flag++;
		}
		for(i=0;i<n;i++)
			printf("%.2lf%s",aver_stu[i],(i==n-1)?"\n":" ");
		for(j=0;j<m;j++)
			printf("%.2lf%s",aver_sub[j],(j==m-1)?"\n":" ");
		printf("%d\n\n",flag);
	}
	return 0;
}

//这几次心情急躁
//犯了好多不该犯的错误
//并且一直踢脚都没有发现
//1.大于等于少写个等号
//2.最后是m-1写成n-1
//HDU,F**K YOU!!!
