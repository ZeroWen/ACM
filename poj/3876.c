/*
 * =====================================================================================
 *
 *       Filename:  3876.c
 *
 *    Description:  
 *    As a university advocating self-learning and work-rest balance, Marjar University has so many days of rest, including holidays and weekends. Each weekend, which consists of Saturday and Sunday, is a rest time in the Marjar University.
 *    The May Day, also known as International Workers' Day or International Labour Day, falls on May 1st. In Marjar University, the May Day holiday is a five-day vacation from May 1st to May 5th. Due to Saturday or Sunday may be adjacent to the May Day holiday, the continuous vacation may be as long as nine days in reality. For example, the May Day in 2015 is Friday so the continuous vacation is only 5 days (May 1st to May 5th). And the May Day in 2016 is Sunday so the continuous vacation is 6 days (April 30th to May 5th). In 2017, the May Day is Monday so the vacation is 9 days (April 29th to May 7th). How excited!
 *    Edward, the headmaster of Marjar University, is very curious how long is the continuous vacation containing May Day in different years. Can you help him?
 *    Input
 *    There are multiple test cases. The first line of input contains an integer T indicating the number of test cases. For each test case, there is an integer y (1928 <= y <= 9999) in one line, indicating the year of Edward's query.
 *    Output
 *    For each case, print the number of days of the continuous vacation in that year.
 *    Sample Input
 *    3
 *    2015
 *    2016
 *    2017
 *    Output
 *    5
 *    6
 *    9
 *
 *        Created:  04/27/2015 00:33:31
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
    int i,y[10000];
    y[1928]=2;
    for(i=1929;i<10000;++i){
        y[i]=y[i-1]+1;
        if((i%4==0&&i%100!=0)||i%400==0)
            y[i]++;
        if(y[i]>7)
            y[i]-=7;
    }
    int t,year,day;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&year);
        if(y[year]==1)
            day=9;
        else if(y[year]==2||y[year]==7)
            day=6;
        else day=5;
        printf("%d\n",day);
    }
    return 0;
}
