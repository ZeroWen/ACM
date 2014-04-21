/*
 * =====================================================================================
 *
 *       Filename:  3188.c
 *
 *    Description:  
 *    Problem Description
 *    This is an easy problem, just for you to warm up.
 *    Give you three edges of a triangle. Can you tell me which kind of triangle it stands for?
 *    If it’s a right triangle(直角三角形), please output “good”. If it’s a isosceles triangle(等腰三角形), please output “perfect”. Otherwise, please output “just a triangle”. You may suppose the input is legal.
 *    Input
 *    The first line contains an integer t means the number of test cases.
 *    The each case contains three integers a, b, c in a line which stands for the length of the three edges.
 *    (0 <a, b, c < 300).
 *    Output
 *    For each case, output the answer in one line.
 *    Sample Input
 *    4
 *    3 4 5
 *    2 2 3 
 *    1 4 4
 *    4 6 3
 *    Sample Output
 *    good
 *    perfect
 *    perfect
 *    just a triangle
 *
 *        Created:  04/22/2014 00:49:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,a[3],i,j,tmp;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			scanf("%d%d%d",&a[0],&a[1],&a[2]);
			for(i=0;i<2;i++)
				for(j=0;j<=i;j++)
					if(a[j]>a[j+1]){
						tmp=a[j];
						a[j]=a[j+1];
						a[j+1]=tmp;
					}
			if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
				printf("good\n");
			else if(a[0]==a[1]||a[1]==a[2])
				printf("perfect\n");
			else
				printf("just a triangle\n");
				
		}
	return 0;
}
