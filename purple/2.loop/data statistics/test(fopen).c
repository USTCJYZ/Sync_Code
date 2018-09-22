#include <stdio.h>
#define INF 1000000000
int main(){
	FILE *fin, *fout;
	fin = fopen("data.in","rb");
	fout = fopen("data.out","wb");
	int x,max=-INF,min=INF;
	while(fscanf(fin,"%d",&x)==1){
		if(x<min) min=x;
		if(x>max) max=x;
	}
	fprintf(fout,"%d %d",min,max);
	fclose(fin);
	fclose(fout);
	return 0;
}
