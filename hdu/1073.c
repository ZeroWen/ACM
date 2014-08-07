/*
 * =====================================================================================
 *
 *       Filename:  1073.c
 *
 *    Description:  
 *    Problem Description
 *    Ignatius is building an Online Judge, now he has worked out all the problems except the Judge System. The system has to read data from correct output file and user's result file, then the system compare the two files. If the two files are absolutly same, then the Judge System return "Accepted", else if the only differences between the two files are spaces(' '), tabs('\t'), or enters('\n'), the Judge System should return "Presentation Error", else the system will return "Wrong Answer".
 *    Given the data of correct output file and the data of user's result file, your task is to determine which result the Judge System will return.
 *    Input
 *    The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
 *    Each test case has two parts, the data of correct output file and the data of the user's result file. Both of them are starts with a single line contains a string "START" and end with a single line contains a string "END", these two strings are not the data. In other words, the data is between the two strings. The data will at most 5000 characters.
 *    Output
 *    For each test cases, you should output the the result Judge System should return.
 *    Sample Input
 *    4
 *    START
 *    1 + 2 = 3
 *    END
 *    START
 *    1+2=3
 *    END
 *    START
 *    1 + 2 = 3
 *    END
 *    START
 *    1 + 2 = 3
 *
 *    END
 *    START
 *    1 + 2 = 3
 *    END
 *    START
 *    1 + 2 = 4
 *    END
 *    START
 *    1 + 2 = 3
 *    END
 *    START
 *    1	+	2	=	3
 *    END
 *    
 *    Sample Output
 *    Presentation Error
 *    Presentation Error
 *    Wrong Answer
 *    Presentation Error
 *
 *    Created:  08/08/2014 00:55:05
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAX 5001
char str1[MAX];
char str2[MAX];
void input(char *str){
    char tmp[MAX];
    while(gets(tmp)&&strcmp(tmp,"END")){
        if(strlen(tmp)==0)
            strcat(str,"\n");
        else
            strcat(str,tmp);
    }
}
void DelChar(char *str,int len){
    char tmp[MAX];
    int i,t=0;
    for(i=0;i<len;i++){
        if(str[i]!=' '&&str[i]!= '\t'&&str[i]!= '\n')
            tmp[t++]=str[i];
    }
    tmp[t]='\0';
    strcpy(str,tmp);
}
int cmp(){
    int len1,len2;
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1==len2&&!strcmp(str1,str2))
        return 1;
    DelChar(str1,len1);
    DelChar(str2,len2);
    if(!strcmp(str1,str2))
        return 0;
    else
        return -1;
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        getchar();
        while(n--){
            memset(str1,0,sizeof(str1));
            memset(str2,0,sizeof(str2));
            input(str1);
            input(str2);
            int ans=cmp();
            if(ans==1)
                puts("Accepted");
            else if(ans==0)
                puts("Presentation Error");
            else
                puts("Wrong Answer");
        }
    }
    return 0;
}

