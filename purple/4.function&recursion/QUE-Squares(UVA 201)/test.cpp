#include <stdio.h>
int H[10][10];
int V[10][10];
int main(){
	int n,m,kase=0,i,j,a,b;
	char c;
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	while(scanf("%d%d",&n,&m)){
		for(i=0;i<10;i++) for(j=0;j<10;j++) H[i][j]=V[i][j]=0;
		for(int z=1;z<=m;z++){
			getchar(); 
			scanf("%c%d%d",&c,&a,&b);
			if(c=='H') H[a][b]=1;else V[b][a]=1;
		}
		int sum=0; 
		if(kase++) printf("\n**********************************\n\n");
		printf("Problem #%d\n\n",kase);
		for(int k=1;k<n;k++){
			int count=0;
			for(i=1;i<=n-k;i++)
			for(j=1;j<=n-k;j++){
				int flag=1;
				for(int i0=i;i0<i+k;i0++) if(V[i0][j]||V[i0][j+k]) flag=0;
				for(int j0=j;j0<j+k;j0++) if(H[i][j0]||H[i+k][j0]) flag=0;
				count+=flag;
			}
			if(count) printf("%d square (s) of size %d\n",count,k);
			sum+=count;
		}
		if(!sum) printf("No completed squares can be found.\n");
	}
	return 0;
}
