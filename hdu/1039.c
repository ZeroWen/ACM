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
    char *s="aeiou";
    int i;
    for(i=0;i<5;i++)
         if(c==s[i])
               return 1;
    return 0;
}
int iscon(char a,char b,char c){
    int r;
    r=isvowel(a)+isvowel(b)+isvowel(c);
    if(r==0||r==3)
        return 1;
    return 0;
}
int main(){
    int n,i,j,len,flag,hasvowel,hascon,same;
    char w[21];
    while(scanf("%s",&w)!=EOF){
        if(strcmp(w,"end")==0)
            break;
        flag=hasvowel=same=hascon=0;
        len=strlen(w);
        for(i=0;i<len;i++){
            if(isvowel(w[i]))
                 hasvowel=1;
            if(i>0&&w[i]==w[i-1]&&w[i]!='e'&&w[i]!='o')
                 same=1;
            if(i>1&&iscon(w[i],w[i-1],w[i-2]))
                 hascon=1;
        }
        if(hasvowel&&!hascon&&!same)
             flag=1;
        printf("<%s> is %sacceptable.\n",w,flag?"":"not ");
    }
    return 0;
}
