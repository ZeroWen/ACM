/*
 * =====================================================================================
 *
 *       Filename:  2630.c
 *
 *    Description:  
 *    When talking about entertainment,Samuel prefers listening to music than anything else. Of all the Chinese singers,Samuel mostly enjoys the songs of Taiwan girl band S.H.E. 
 *    Do you have any likes and dislikes in choosing whose songs to enjoy?And Samuel is fond of watching Channel[V].But Samuel has a bad habit. When the singer does not match his taste,he will immediately switch the channel.
 *    Samuel likes S.H.E,Jay,Elva,Jolin,Aska,and Yoga(Pay more attention to the spelling please!Use them according to what Samuel gives you or you may get wrong answer). Suppose Samuel don't like any other singers., you are asked to tell how long will Samuel stay in front of the TV according to a list of the MVs that are planned to be broadcast in Channel[V].
 *    Input
 *    The input will be 2 part:
 *    the first line only contain a number t,which means the number of test cases. The first line of each test case will be the n MVs that will be broadcast,and each of the following n lines will be the MV's singer and each of the MV will take MM:SS time. 
 *    Output
 *    Output in this format”Samuel will watch Channel[V] for H hour(s),M minute(s),S second(s).”
 *    Sample Input
 *    1
 *    3
 *    S.H.E 03:40
 *    Jay  04:50
 *    Elva 05:35 
 *    Sample Output
 *    Samuel will watch Channel[V] for 0 hour(s),14 minute(s),5 second(s).
 *
 *        Created:  05/11/2015 20:26:43
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int isFav(char *str){
	char key[6][7]={"S.H.E","Jay","Elva","Jolin","Aska","Yoga"};
	int i;
	for(i=0;i<6;++i)
		if(!strcmp(key[i],str))
			return 1;
	return 0;
}
void add_time(int *hour,int *min,int *sec,int t_min,int t_sec){
	int e_min=(t_sec+*sec)/60;
	*sec=(t_sec+*sec)%60;
	*min+=e_min+t_min;
	int e_hour=*min/60;
	*min%=60;
	*hour+=e_hour;
}
int main(){
	int t,n,i,t_min,t_sec,hour,min,sec,flag;
	char str[10];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		flag=1;
		hour=min=sec=0;
		for(i=0;i<n;++i){
			scanf("%s %d:%d",str,&t_min,&t_sec);
			if(flag && isFav(str))
				add_time(&hour,&min,&sec,t_min,t_sec);
			else
				flag=0;
		}
		printf("Samuel will watch Channel[V] for %d hour(s),%d minute(s),%d second(s).\n",hour,min,sec);
	}
	return 0;
}
