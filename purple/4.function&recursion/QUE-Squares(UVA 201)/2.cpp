#include <stdio.h>
int main(){
	int n,m,i,j,H[10][10],V[10][10];
	char c;
	//freopen("in.txt","r",stdin);
	while(scanf("%d%d",&n,&m)){
		for(i=0;i<10;i++){for(j=0;j<10;j++) H[i][j]=V[i][j]=0;}
		while(m--){
			scanf("%c%d%d",&c,&i,&j);
			if(c=='H') H[i][j]=1;
			else V[j][i]=1;
		} 
	}
	return 0;
}
