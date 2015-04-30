/*
 * =====================================================================================
 *
 *       Filename:  3860.c
 *
 *    Description:  
 *    Whoooa! There is a spy in Marjar University. All we know is that the spy has a special ID card. Please find him out!
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T indicating the number of test cases. For each test case:
 *    The first line contains a integer N (3 <= N <= 100), which describes that there are N students need to be checked.
 *    The second line contains N integers indicating the ID card number of N students. All ID card numbers are 32-bit integers.
 *    Output
 *    For each test case, output the ID card number which is different from others.
 *    Sample Input
 *    3
 *    10
 *    1 1 1 1 1 1 1 1 6 1
 *    3
 *    9 9 8
 *    5
 *    90016 90016 90016 2009 90016
 *    Sample Output
 *    6
 *    8
 *    2009
 *
 *        Created:  05/01/2015 01:41:32
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
long a[101],a0,a1,a2,id;
int main(){
    int t,n,i,flag;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        flag=0;
		for(i=0;i<n;++i)
			scanf("%ld",&a[i]);
        for(i=0;i<n;++i){
            if(!i){
                a0=a[0]; 
            }
            else if(i==1){
                 a1=a[1];
                 if(a1==a0){
                     flag=1;
                     id=a0;
                 }
            }
            else if(!flag&&i==2){
                 a2=a[2];
                 if(a2==a0){
                     printf("%ld\n",a1);
                     break;
                 }
                 else if(a2==a1){
                      printf("%ld\n",a0);
                      break;
                 }
            }
            if(flag&&i>1&&a[i]!=id){
                printf("%ld\n",a[i]);
                break;
            }
        }
    }
    return 0;
}
