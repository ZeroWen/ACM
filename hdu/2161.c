/*
 * =====================================================================================
 *
 *       Filename:  2161.c
 *
 *    Description:  
 *    Problem Description
 *    Write a program to read in a list of integers and determine whether or not each number is prime. A number, n, is prime if its only divisors are 1 and n. For this problem, the numbers 1 and 2 are not considered primes. 
 *    Input
 *    Each input line contains a single integer. The list of integers is terminated with a number<= 0. You may assume that the input contains at most 250 numbers and each number is less than or equal to 16000.
 *    Output
 *    The output should consists of one line for every number, where each line first lists the problem number, followed by a colon and space, followed by "yes" or "no". 
 *    Sample Input
 *    1
 *    2
 *    3
 *    4
 *    5
 *    17
 *    0
 *    Sample Output
 *    1: no
 *    2: no
 *    3: yes
 *    4: no
 *    5: yes
 *    6: yes
 *
 *        Version:  1.0
 *        Created:  04/11/2014 20:06:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
int main(){
    int i=0,n,j,sign;
    while(scanf("%d",&n)!=EOF){
        if(n<=0)
            break;
        sign=1;
        if(n<3)
            sign=0;
        for(j=2;j<=sqrt(n);j++)
            if(n%j==0){
                sign=0;
                break;
            }
        ++i;
        printf("%d: %s\n",i,sign?"yes":"no");
    }
    return 0;
}
