/*
 * =====================================================================================
 *
 *       Filename:  5162.c
 *
 *    Description: 
 *    There are n kids and they want to know who can jump the farthest. For each kid, he can jump three times and the distance he jumps is maximum distance amount all the three jump. For example, if the distance of each jump is (10, 30, 20), then the farthest distance he can jump is 30. Given the distance for each jump of the kids, you should find the rank of each kid.
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T (1≤T≤100), indicating the number of test cases. For each test case: The first line contains an integer n (2≤n≤3), indicating the number of kids. For the next n lines, each line contains three integers ai,bi and ci (1≤ai,bi,ci,≤300), indicating the distance for each jump of the i-th kid. It's guaranteed that the final rank of each kid won't be the same (ie. the farthest distance each kid can jump won't be the same).
 *    Output
 *    For each test case, you should output a single line contain n integers, separated by one space. The i-th integer indicating the rank of i-th kid.
 *    Sample Input
 *    2
 *    3
 *    10 10 10
 *    10 20 30
 *    10 10 20
 *    2
 *    3 4 1
 *    1 2 1
 *    Sample Output
 *    3 1 2
 *    1 2
 *
 *        Created:  04/02/2015 21:42:16
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return *(int *)b-*(int *)a;
}
int main(){
    int t,n,i,j,a[30],b[20],tmp;
    scanf("%d",&t);
    while(t--){
        memset(a,0,sizeof(a));
        scanf("%d",&n);
        for(i=0;i<n;++i)
            for(j=0;j<3;++j){
                scanf("%d",&tmp);
                a[i]=a[i]<tmp?tmp:a[i];
            }
        for(i=0;i<n;++i)
            b[i]=a[i];
        qsort(a,n,sizeof(int),cmp);
        for(i=0;i<n;++i)
            for(j=0;j<n;++j)
                if(b[i]==a[j]){
                    printf("%d%s",j+1,i==n-1?"\n":" ");
                    break;
                }
    }
    return 0;
}


