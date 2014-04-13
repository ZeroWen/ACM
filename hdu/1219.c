/*
 * =====================================================================================
 *
 *       Filename:  1219.c
 *
 *    Description:  
 *    Problem Description
 *    Ignatius is doing his homework now. The teacher gives him some articles and asks him to tell how many times each letter appears.
 *    It's really easy, isn't it? So come on and AC ME.
 *    Input
 *    Each article consists of just one line, and all the letters are in lowercase. You just have to count the number of each letter, so do not pay attention to other characters. The length of article is at most 100000. Process to the end of file.
 *    Note: the problem has multi-cases, and you may use "while(gets(buf)){...}" to process to the end of file.
 *    Output
 *    For each article, you have to tell how many times each letter appears. The output format is like "X:N". 
 *    Output a blank line after each test case. More details in sample output.
 *    Sample Input
 *    hello, this is my first acm contest!
 *    work hard for hdu acm.
 *    Sample Output
a:1
b:0
c:2
d:0
e:2
f:1
g:0
h:2
i:3
j:0
k:0
l:2
m:2
n:1
o:2
p:0
q:0
r:1
s:4
t:4
u:0
v:0
w:0
x:0
y:1
z:0

a:2
b:0
c:1
d:2
e:0
f:1
g:0
h:2
i:0
j:0
k:1
l:0
m:1
n:0
o:2
p:0
q:0
r:3
s:0
t:0
u:1
v:0
w:1
x:0
y:0
z:0
 *    
 *
 *        Version:  1.0
 *        Created:  04/13/2014 20:56:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[100001];
int main(){
	int i;
	int b[26];
	while(gets(a)){
		memset(b,0,sizeof(b));
		int len;
		len=strlen(a);
		for(i=0;i<len;i++){
			if(isalpha(a[i]))
		   b[a[i]-'a']++;	
		}
		for(i=0;i<26;i++){
			printf("%c:%d\n",'a'+i,b[i]);
		}
		printf("\n");
		
	}
	return 0;
}
