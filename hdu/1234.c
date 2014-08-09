/*
 * =====================================================================================
 *
 *       Filename:  1234.c
 *
 *    Description:  
 *    Input
 *    测试输入的第一行给出记录的总天数N ( > 0 )。下面列出了N天的记录。 
 *    每天的记录在第一行给出记录的条目数M ( > 0 )，下面是M行，每行的格式为 
 *    证件号码 签到时间 签离时间 
 *    其中时间按“小时:分钟:秒钟”（各占2位）给出，证件号码是长度不超过15的字符串。
 *    Output
 *    对每一天的记录输出1行，即当天开门和关门人的证件号码，中间用1空格分隔。 
 *    注意：在裁判的标准测试输入中，所有记录保证完整，每个人的签到时间在签离时间之前，且没有多人同时签到或者签离的情况。 
 *    Sample Input
 *    3
 *    1
 *    ME3021112225321 00:00:00 23:59:59
 *    2
 *    EE301218 08:05:35 20:56:35
 *    MA301134 12:35:45 21:40:42
 *    3
 *    CS301111 15:30:28 17:00:10
 *    SC3021234 08:00:00 11:25:25
 *    CS301133 21:45:00 21:58:40
 *    Sample Output
 *    ME3021112225321 ME3021112225321
 *    EE301218 MA301134
 *    SC3021234 CS301133
 *
 *    Created:  08/09/2014 14:31:54
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
typedef struct{
	char id[20];
	int inhour;
	int inmin;
	int insec;
	int outhour;
	int outmin;
	int outsec;
	long intime;
	long outtime;
}log;
log info[100];
int main(){
	int n,m,i,j,k;
	long min,max;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%s %d:%d:%d %d:%d:%d",info[i].id,&info[i].inhour,&info[i].inmin,&info[i].insec,&info[i].outhour,&info[i].outmin,&info[i].outsec);
			info[i].intime=info[i].inhour*60*60+info[i].inmin*60+info[i].insec;
			info[i].outtime=info[i].outhour*60*60+info[i].outmin*60+info[i].outsec;
		}
		min=info[0].intime;
		max=info[0].outtime;
		j=k=0;
		for(i=1;i<m;i++){
			if(min>info[i].intime){
				min=info[i].intime;
				j=i;
			}
			if(max<info[i].outtime){
				max=info[i].outtime;
				k=i;
			}
		}
		printf("%s %s\n",info[j].id,info[k].id);
	}
	return 0;
}
