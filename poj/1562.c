/*
 * =====================================================================================
 *
 *       Filename:  1562.c
 *
 *    Description:  
 *    The GeoSurvComp geologic survey company is responsible for detecting underground oil deposits. GeoSurvComp works with one large rectangular region of land at a time, and creates a grid that divides the land into numerous square plots. It then analyzes each plot separately, using sensing equipment to determine whether or not the plot contains oil. A plot containing oil is called a pocket. If two pockets are adjacent, then they are part of the same oil deposit. Oil deposits can be quite large and may contain numerous pockets. Your job is to determine how many different oil deposits are contained in a grid.
 *    Input
 *    The input contains one or more grids. Each grid begins with a line containing m and n, the number of rows and columns in the grid, separated by a single space. If m = 0 it signals the end of the input; otherwise 1 <= m <= 100 and 1 <= n <= 100. Following this are m lines of n characters each (not counting the end-of-line characters). Each character corresponds to one plot, and is either `*', representing the absence of oil, or `@', representing an oil pocket. 
 *    Output
 *    are adjacent horizontally, vertically, or diagonally. An oil deposit will not contain more than 100 pockets.
 *    Sample Input
 *    1 1
 *    *
 *    3 5
 *    *@*@*
 *    **@**
 *    *@*@*
 *    1 8
 *    @@****@*
 *    5 5 
 *    ****@
 *    *@@*@
 *    *@**@
 *    @@@*@
 *    @@**@
 *    0 0
 *    Sample Output
 *    0
 *    1
 *    2
 *    2
 *
 *        Created:  06/06/2015 19:02:36
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
const int MAXN=105;
int map[MAXN][MAXN];
int dx[10]={0,0,1,-1,-1,-1,1,1};
int dy[10]={1,-1,0,0,-1,1,-1,1};
int n, m;
void dfs(int x,int y){
    int i,nx,ny;
    map[x][y]=0;
    for(i=0;i<8;i++){
        nx=x+dx[i];
		ny=y+dy[i];
        if(nx<1||ny<1||nx>n||ny>m)
			continue;
        if(map[nx][ny])
			dfs(nx,ny);
    }
}
int main(){
    int i,j,num;
    char a;
    while(scanf("%d%d",&n,&m)!=EOF&&(n||m)){
        num=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf(" %c",&a);
                if(a=='@'){
                    map[i][j]=1;
                }
                else{
                    map[i][j]=0;
                }
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(map[i][j]){
                    dfs(i,j);
                    num++;
                }
            }
        }
        printf("%d\n",num);
    }
    return 0;
}
