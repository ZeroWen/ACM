/*
 * =====================================================================================
 *
 *       Filename:  1263.c
 *
 *    Description:  
 *    Problem Description
 *    夏天来了~~好开心啊,呵呵,好多好多水果~~
 *    Joe经营着一个不大的水果店.他认为生存之道就是经营最受顾客欢迎的水果.现在他想要一份水果销售情况的明细表,这样Joe就可以很容易掌握所有水果的销售情况了.
 *    Input
 *    第一行正整数N(0<N<=10)表示有N组测试数据.
 *    每组测试数据的第一行是一个整数M(0<M<=100),表示工有M次成功的交易.其后有M行数据,每行表示一次交易,由水果名称(小写字母组成,长度不超过80),水果产地(小写字母组成,长度不超过80)和交易的水果数目(正整数,不超过100)组成.
 *    Output
 *    对于每一组测试数据,请你输出一份排版格式正确(请分析样本输出)的水果销售情况明细表.这份明细表包括所有水果的产地,名称和销售数目的信息.水果先按产地分类,产地按字母顺序排列;同一产地的水果按照名称排序,名称按字母顺序排序.
 *    两组测试数据之间有一个空行.最后一组测试数据之后没有空行.
 *    Sample Input
 *    1
 *    5
 *    apple shandong 3
 *    pineapple guangdong 1
 *    sugarcane guangdong 1
 *    pineapple guangdong 3
 *    pineapple guangdong 1
 *
 *    Sample Output
 *    guangdong
 *    	|----pineapple(5)
 *    	|----sugarcane(1)
 *    shandong
 *    	|----apple(3)
 *
 *    Created:  08/14/2014 14:19:19
 *    Compiler:  gcc
 *
 *    Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char name[81];
    char place[81];
    int num;
}fruit;
fruit a[101];
int cmp(const void *a,const void *b){
    if(strcmp((*(fruit *)a).place,(*(fruit *)b).place)==0)
        return strcmp((*(fruit *)a).name,(*(fruit *)b).name);
    else
        return strcmp((*(fruit *)a).place,(*(fruit *)b).place);
}
int main(){
    int n,m,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%s %s %d",a[i].name,a[i].place,&a[i].num);
        qsort(a,m,sizeof(fruit),cmp);
        char di[100],min[100];
        int cnt=0,flag=1;
        strcpy(di,a[0].place);
        strcpy(min,a[0].name);
        for(i=0;i<m;i++){
            if(strcmp(di,a[i].place)){
                strcpy(di,a[i].place);
                strcpy(min,a[i].name);
                flag=1;
                cnt=0;
            }
            if(!strcmp(di,a[i].place)){
                if(flag){
                    printf("%s\n",di);
                    flag=0;
                }
                if(!strcmp(min,a[i].name)){
                    while(!strcmp(min,a[i].name)&&!strcmp(di,a[i].place)){
                        cnt+=a[i].num;
                        i++;
                    }
                    printf("   |----%s(%d)\n",min,cnt);
                    strcpy(min,a[i].name);
                    i--;
                    cnt=0;
                }
            }
        }
        if(n)
            printf("\n");
    }
    return 0;
}
