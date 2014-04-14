/*
 * =====================================================================================
 *
 *       Filename:  2055.c
 *
 *    Description:  
 *    Problem Description
 *    we define f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
 *    Give you a letter x and a number y , you should output the result of y+f(x).
 *    Input
 *    On the first line, contains a number T.then T lines follow, each line is a case.each case contains a letter and a number.
 *    Output
 *    for each case, you should the result of y+f(x) on a line.
 *    Sample Input
 *    6
 *    R 1
 *    P 2
 *    G 3
 *    r 1
 *    p 2
 *    g 3
 *    Sample Output
 *    19
 *    18
 *    10
 *    -17
 *    -14
 *    -4
 *
 *        Version:  1.0
 *        Created:  04/14/2014 17:10:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	char c;
	int t,n;
	while(scanf("%d",&t)!=EOF)
		while(t--){
			getchar();
			scanf("%c%d",&c,&n);
			printf("%d\n",(c>='a'&&c<='z')?(n-(c-'a'+1)):(n+c-'A'+1));
		}
	return 0;
}

/*
#include <stdio.h>
int main(){
    char c;
    int t,n;
    while(scanf("%d",&t)!=EOF)
        for(getchar();t--&&scanf("%c%d",&c,&n);getchar())
            printf("%d\n",((c>96&&c<123)?(96-c):(c-64))+n);
}
*/
