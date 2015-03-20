/*
 * =====================================================================================
 *
 *       Filename:  1028.c
 *
 *    Description:  
 *    Standard web browsers contain features to move backward and forward among the pages recently visited. One way to implement these features is to use two stacks to keep track of the pages that can be reached by moving backward and forward. In this problem, you are asked to implement this.
 *    The following commands need to be supported:
 *    BACK: Push the current page on the top of the forward stack. Pop the page from the top of the backward stack, making it the new current page. If the backward stack is empty, the command is ignored.
 *    FORWARD: Push the current page on the top of the backward stack. Pop the page from the top of the forward stack, making it the new current page. If the forward stack is empty, the command is ignored.
 *    VISIT : Push the current page on the top of the backward stack, and make the URL specified the new current page. The forward stack is emptied.
 *    QUIT: Quit the browser.
 *    Assume that the browser initially loads the web page at the URL http://www.acm.org/
 *    Input
 *    Input is a sequence of commands. The command keywords BACK, FORWARD, VISIT, and QUIT are all in uppercase. URLs have no whitespace and have at most 70 characters. You may assume that no problem instance requires more than 100 elements in each stack at any time. The end of input is indicated by the QUIT command.
 *    Output
 *    For each command other than QUIT, print the URL of the current page after the command is executed if the command is not ignored. Otherwise, print "Ignored". The output for each command should be printed on its own line. No output is produced for the QUIT command.
 *    Sample Input
 *    VISIT http://acm.ashland.edu/
 *    VISIT http://acm.baylor.edu/acmicpc/
 *    BACK
 *    BACK
 *    BACK
 *    FORWARD
 *    VISIT http://www.ibm.com/
 *    BACK
 *    BACK
 *    FORWARD
 *    FORWARD
 *    FORWARD
 *    QUIT
 *
 *    Sample Output
 *    http://acm.ashland.edu/
 *    http://acm.baylor.edu/acmicpc/
 *    http://acm.ashland.edu/
 *    http://www.acm.org/
 *    Ignored
 *    http://acm.ashland.edu/
 *    http://www.ibm.com/
 *    http://acm.ashland.edu/
 *    http://www.acm.org/
 *    http://acm.ashland.edu/
 *    http://www.ibm.com/
 *    Ignored
 *
 *        Created:  03/20/2015 19:10:34
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int main(){
	char a[105][80]={"http://www.acm.org/"},str[10];
	int top,temp;
	top=temp=0;
	while(scanf("%s",str)!=EOF){
		if(!strcmp(str,"QUIT"))
			break;
		if(!strcmp(str,"VISIT")){
			top=temp;
			top++;
			temp=top;
			scanf("%s",a[top]);
			printf("%s\n",a[top]);
		}
		if(!strcmp(str,"BACK")){
			if(temp>0)
				temp--,printf("%s\n",a[temp]);
			else
				printf("Ignored\n");
		}
		if(!strcmp(str,"FORWARD")){
			if(temp+1<=top){
				temp++;
				printf("%s\n",a[temp]);
			}
			else
				printf("Ignored\n");
		}
	}
	return 0;
}
