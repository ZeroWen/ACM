/*
 * =====================================================================================
 *
 *       Filename:  1039.c
 *
 *    Description:  
 *    Problem Description
 *    Password security is a tricky thing. Users prefer simple passwords that are easy to remember (like buddy), but such passwords are often insecure. Some sites use random computer-generated passwords (like xvtpzyo), but users have a hard time remembering them and sometimes leave them written on notes stuck to their computer. One potential solution is to generate "pronounceable" passwords that are relatively secure but still easy to remember.
 *
 *    FnordCom is developing such a password generator. You work in the quality control department, and it's your job to test the generator and make sure that the passwords are acceptable. To be acceptable, a password must satisfy these three rules:
 *    It must contain at least one vowel.
 *    It cannot contain three consecutive vowels or three consecutive consonants.
 *    It cannot contain two consecutive occurrences of the same letter, except for 'ee' or 'oo'.
 *    (For the purposes of this problem, the vowels are 'a', 'e', 'i', 'o', and 'u'; all other letters are consonants.) Note that these rules are not perfect; there are many common/pronounceable words that are not acceptable.
 *    Input
 *    The input consists of one or more potential passwords, one per line, followed by a line containing only the word 'end' that signals the end of the file. Each password is at least one and at most twenty letters long and consists only of lowercase letters.
 *    Output
 *    For each password, output whether or not it is acceptable, using the precise format shown in the example.
 *    Sample Input
 *    a
 *    tv
 *    ptoui
 *    bontres
 *    zoggax
 *    wiinq
 *    eep
 *    houctuh
 *    end
 *    Sample Output
 *    <a> is acceptable.
 *    <tv> is not acceptable.
 *    <ptoui> is not acceptable.
 *    <bontres> is not acceptable.
 *    <zoggax> is not acceptable.
 *    <wiinq> is not acceptable.
 *    <eep> is acceptable.
 *    <houctuh> is acceptable.
 *
 *    Created:  06/28/14 22:37:20
 *    Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
int isvowel(char c){
	int flag;
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':flag=1;break;
		default:flag=0;
	}
	return flag;
}
int main(){
	char a[21];
	int i,vowel,three,two;
	while(scanf("%s",a)!=EOF){
		if(!strcmp(a,"end"))
			break;
		vowel=three=two=0;
		for(i=0;a[i]!='\0';i++){
			if(isvowel(a[i])){
				vowel=1;
				if((i+2)<strlen(a)&&isvowel(a[i+1])&&isvowel(a[i+2]))
					three=1;
			}
			else if((i+2)<strlen(a)&&!isvowel(a[i+1])&&!isvowel(a[i+2]))
				three=1;
			if(a[i]!='e'&&a[i]!='o'&&a[i+1]!='\0'&&a[i+1]==a[i])
				two=1;
		}
		printf("<%s> is %sacceptable.\n",a,(vowel&&!three&&!two)?"":"not ");
	}
	return 0;
}
