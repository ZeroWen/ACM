/*
 * =====================================================================================
 *
 *       Filename:  2631.c
 *
 *    Description:  
 *    Samuel concerns about his health condition a lot. He never wants to damage his health by staying up late at night or leaving his stomach empty without having meals. He always goes to bed at 10 pm,and gets up at 7 am next morning. He often goes to the dinning hall at the meal time,even if he is engaged with a lot of work at hand during the dinner time. In a word, healthy regular life holds higher priority than anything else in Samuel's opinion. 
 *    According to the traditional Chinese medical care spirit,breakfast ought to be finished at about 7 am, lunch time at about 12 o'clock, and supper time at about 5 pm. Sleep cannot be later than 1 o'clock am because 1-2 am is a precious time for the liver to relax and rebuild itself. If you have a habit of sleeping later than 2 o'clock, you have to pay more attention to your liver before it is too late. And it has been proved that only by sleeping early and for enough time will your liver function well. 
 *    Here are some principles of living a health life:
 *    Samuel holds the view that health is the firm foundation of your work,so he sticks to these principles in order to lead a health life. Will you want to be healthy?
 *    The problem Samuel gives you is to tell whether his friend NeverGone is leading a health life.
 *    Input
 *    The input includes 2 major parts:
 *    First part is the test number t,an integer.
 *    Second part is the part of each test cases:
 *    Sleep time HH:MM-HH:MM(in 24 hours,time lasts within 24 hours),the bottles one drank a day n,take sports or not(using T/F to describe,always big letter),whether or not stay a good mood(T/F boolean type,the same with the former explanation) 
 *    Output
 *    Only if his living matches the four pieces of the principle above can you say he is leading a health life,so please output”Health life,NeverGone you should keep doing!”otherwise output”NeverGone should pay attention to his health!”.
 *    Sample Input
 *    2
 *    23:59-6:58
 *    8
 *    T
 *    T
 *    24:00-8:00
 *    10
 *    T
 *    T
 *
 *        Created:  05/11/2015 23:57:44
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,s_hour,s_min,e_hour,e_min,bottle,sleep;
	char sports[3],moods[3];
	scanf("%d",&t);
	while(t--){
		scanf("%d:%d-%d:%d",&s_hour,&s_min,&e_hour,&e_min);
		if((s_hour<24&&sleep>=23)&&(e_hour+24-s_hour)>=7&&(e_hour+24-s_hour)<=7)
			sleep=1;
		else if(s_hour==24&&s_min==0&&(e_hour==7||(e_hour==8&&e_min==0)))
			sleep=1;
		else
			sleep=0;
		scanf("%d",&bottle);
		scanf("%s",sports);
		scanf("%s",moods);
		if(sports[0]=='T'&&moods[0]=='T'&&bottle>=8&&sleep)
			printf("Health life,NeverGone you should keep doing!\n");
		else
			printf("NeverGone should pay attention to his health!\n");
	}
	return 0;
}
