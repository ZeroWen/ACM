/*
 * =====================================================================================
 *
 *       Filename:  3819.c
 *
 *    Description:  
 *    Bob is a freshman in Marjar University. He is clever and diligent. However, he is not good at math, especially in Mathematical Analysis.
 *    After a mid-term exam, Bob was anxious about his grade. He went to the professor asking about the result of the exam. The professor said:
 *    "Too bad! You made me so disappointed."
 *    "Hummm... I am giving lessons to two classes. If you were in the other class, the average scores of both classes will increase."
 *    Now, you are given the scores of all students in the two classes, except for the Bob's. Please calculate the possible range of Bob's score. All scores shall be integers within [0, 100].
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T indicating the number of test cases. For each test case:
 *    The first line contains two integers N (2 <= N <= 50) and M (1 <= M <= 50) indicating the number of students in Bob's class and the number of students in the other class respectively.
 *    The next line contains N - 1 integers A1, A2, .., AN-1 representing the scores of other students in Bob's class.
 *    The last line contains M integers B1, B2, .., BM representing the scores of students in the other class.
 *    Output
 *    For each test case, output two integers representing the minimal possible score and the maximal possible score of Bob.
 *    It is guaranteed that the solution always exists.
 *    Sample Input
 *    2
 *    4 3
 *    5 5 5
 *    4 4 3
 *    6 5
 *    5 5 4 5 3
 *    1 3 2 2 1
 *    Sample Output
 *    4 4
 *    2 4
 *
 *        Created:  05/01/2015 01:39:33
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
    int t,n,m,a[55],b[55],i,suma,sumb,aa,ab;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(i=0,suma=0;i<n-1;++i){
            scanf("%d",&a[i]);
            suma+=a[i];
        }
        aa=suma/(n-1)-!(suma%(n-1));
        for(i=0,sumb=0;i<m;++i){
            scanf("%d",&b[i]);
            sumb+=b[i];
        }
        ab=sumb/m+1;
        printf("%d %d\n",ab,aa);
    }
    return 0;
}

