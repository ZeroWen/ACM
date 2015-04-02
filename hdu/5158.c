/*
 * =====================================================================================
 *
 *       Filename:  5158.c
 *
 *    Description:  
 *    I have been in school for several years, so I have visited all messes here. Now I have lost intersts in all of the foods. So when during the meal time, I don’t know which mess I should go to. So I came up with a solution.
 *    There are 4 messes in our school, I number them from 0 to 3. Then I says “Big Bing Small Jiang, Point Who Is Who!”, when I say the first word I point to the mess which is numbered 0, when I say the i-th (i>1) word I point to the mess whose number is one larger than the previous one. In case of the number of previous mess is 3, I will point to 0 again. I will go to the mess which I point to last time. Thus in this case I will go to the mess which is numbered 3. The following table explains the course of my solution to this case.
 *    Word I say Mess id I point to Big 0 Bing 1 Small 2 Jiang 3 Point 0 Who 1 Is 2 Who 3
 *    I will go to university after several days, I have heard that there are so many messes in it. So I will apply my solution again. Surpose there are n messes which are numberd through 0 to n-1, and I will say m words. When I say the first word I point to the mess which is numbered 0, when I say the i-th (i>1) word I point to the mess whose number is one larger than the previous one. In case of the number of previous mess is n-1, I will point to 0 again. I will go to the mess which I point to last time. So which mess will I point to?.
 *    It is so time-consuming to count it through manual work. So I want you to write a program to help me. Would you help me?
 *    Input
 *    Multi test cases (about 10000), every case contain two integers n and m in a single line.
 *    [Technical Specification]
 *    1<=n, m<=100
 *    Output
 *    For each case, output the number of the mess which I should go to.
 *    Sample Input
 *    4 3
 *    1 100
 *    Sample Output
 *    2
 *    0
 *
 *        Created:  04/02/2015 21:47:21
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
        printf("%d\n",m%n?(m%n-1):(n-1));
    }
    return 0;
}
