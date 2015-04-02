/*
 * =====================================================================================
 *
 *       Filename:  5194.c
 *
 *    Description:  
 *    There are n black balls and m white balls in the big box.
 *    Now, DZY starts to randomly pick out the balls one by one. It forms a sequence S. If at the i-th operation, DZY takes out the black ball, Si=1, otherwise Si=0.
 *    DZY wants to know the expected times that '01' occurs in S.
 *    Input
 *    The input consists several test cases. (TestCase≤150)
 *    The first line contains two integers, n, m(1≤n,m≤12)
 *    Output
 *    For each case, output the corresponding result, the format is p/q(p and q are coprime)
 *    Sample Input
 *    1 1
 *    2 3
 *    Sample Output
 *    1/2
 *    6/5
 *
 *        Created:  04/02/2015 21:46:00
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int n,m,g;
    while(scanf("%d%d",&n,&m)!=EOF){
        g=gcd(n*m,n+m);
        printf("%d/%d\n",n*m/g,(n+m)/g);
    }
    return 0;
}
