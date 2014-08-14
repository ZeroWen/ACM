#include <stdio.h>
#include <string.h>
int x[200],y[200];
int main(){
	int n,i,j,t,m,left,right,flag,temp;
	while(scanf("%d",&n),n){
		m=n<<1;
		for(i=0;i<m;++i)
			scanf("%d%d",&x[i],&y[i]);
		for(i=-500;i<=500;++i){
			flag=0;
			for(j=-500;j<=500;++j){
				left=right=0;
				for(t=0;t<m;++t){
					temp=i*x[t]+j*y[t];
					if(temp>0)
						left++;
					else if(temp<0)
						right++;
					else
						break;
				}
				if(left==right&&t==m){
					flag=1;
					printf("%d %d\n",i,j);
					break;
				}
			}
			if(flag)
				break;
		}
	}
	return 0;
}

