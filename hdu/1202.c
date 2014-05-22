/*
 * =====================================================================================
 *
 *       Filename:  1202.c
 *
 *    Description:  
 *    Problem Description
 *    每学期的期末，大家都会忙于计算自己的平均成绩，这个成绩对于评奖学金是直接有关的。国外大学都是计算GPA(grade point average) 又称GPR(grade point ratio)，即成绩点数与学分的加权平均值来代表一个学生的成绩的。那么如何来计算GPA呢？ 
 *    一般大学采用之计分法 
 *    A90 - 100 4 点 
 *    B80 - 89 3 点 
 *    C70 - 79 2 点 
 *    D60 - 69 1 点 
 *    E0 - 59 0 点 
 *    例如：某位学生修习三门课，其课目、学分及成绩分别为： 
 *    英文：三学分、92 分；化学：五学分、80 分；数学：二学分、60分，则GPA的算法如下： 
 *    科目 学分 分数 点数 分数×点数 
 *    英文  3    92    4     12
 *    化学  5    80    3     15
 *    数学  2    60    1      2
 *    合计  10   29 
 *    29/10=2.9 
 *    2.9即为某生的GPA 
 *    下面有请你写一个用于计算GPA的程序。
 *    Input
 *    包含多组数据，每组数据的第一行有一个数N，接下来N行每行表示一门成绩。每行有两个实型的数 s,p，s表示这门课的学分,p表示该学生的成绩（百分制）。如果p=-1则说明该学生这门课缺考，是不应该计算在内的。
 *    Output
 *    对每组数据输出一行，表示该学生的GPA，保留两位小数。如果GPA不存在，输出-1。
 *    Sample Input
 *    3
 *    3 92
 *    5 80
 *    2 60
 *    Sample Output
 *    2.90
 *
 *        Created:  05/22/2014 15:29:55
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int gpacal(double n){
	if(n>=0.0&&n<60.0)
		return 0;
	else if(n>=60.0&&n<70.0)
		return 1;
	else if(n>=70.0&&n<80.0)
		return 2;
	else if(n>=80.0&&n<90.0)
		return 3;
	else
		return 4;
}
int main(){
	int n,i;
	double s,p,gpa_a,gpa_b;
	while(scanf("%d",&n)!=EOF){
		for(i=0,gpa_a=gpa_b=0;i<n;i++){
			scanf("%lf%lf",&s,&p);
			if(p==-1)
				continue;
			gpa_a+=s;
			gpa_b+=s*gpacal(p);
		}
		if(!gpa_a&&!gpa_b)
			printf("-1\n");
		else
			printf("%.2lf\n",gpa_b/gpa_a);
	}
	return 0;
}
