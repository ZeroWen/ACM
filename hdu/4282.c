/*
 * =====================================================================================
 *
 *       Filename:  4282.c
 *
 *    Description:  
 *    Problem Description
 *    Haoren is very good at solving mathematic problems. Today he is working a problem like this: 
 *    Find three positive integers X, Y and Z (X < Y, Z > 1) that holds
 *    X^Z + Y^Z + XYZ = K
 *    where K is another given integer.
 *    Here the operator “^” means power, e.g., 2^3 = 2 * 2 * 2.
 *    Finding a solution is quite easy to Haoren. Now he wants to challenge more: What’s the total number of different solutions?
 *    Surprisingly, he is unable to solve this one. It seems that it’s really a very hard mathematic problem.
 *    Now, it’s your turn.
 *    Input
 *    There are multiple test cases. 
 *    For each case, there is only one integer K (0 < K < 2^31) in a line.
 *    K = 0 implies the end of input.
 *    Output
 *    Output the total number of solutions in a line for each test case.
 *    Sample Input
 *    9
 *    53
 *    6
 *    0
 *    Sample Output
 *    1
 *    1
 *    0
 *    Hint
 *    9 = 1^2 + 2^2 + 1 * 2 * 2
 *    53 = 2^3 + 3^3 + 2 * 3 * 3
 *
 *    Created:  08/13/2014 16:22:57
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>
__int64 power(__int64 x,int z){
    __int64 t=1;
    while(z--)
        t*=x;
    return t;
}
int main(){
    __int64 x,y,u,v,n;
    while(scanf("%I64d",&n),n){
        int i=0,t=sqrt(n),z;
        if(t*t==n)
            i+=(t-1)>>1;
		printf("i=%d\n",i);
        for(z=3;z<32;z++)
            for(x=1;;x++){
                u=power(x,z);
                if(u>=n/2)
                    break;
                for(y=x+1;;y++){
                    v=u+power(y,z)+z*x*y;
                    if(v>=n){
                        i+=(v==n);
                        break;
                    }
                }
            }
        printf("%d\n",i);
    }
    return 0;
}

