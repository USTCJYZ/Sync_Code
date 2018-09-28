#include <stdio.h>
#include <string.h>
#define MAXN 100
int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	char s1[MAXN+2],s2[MAXN+2];
	while(scanf("%s %s",s1,s2)!=EOF){
		int len1=strlen(s1),len2=strlen(s2),min1=0,min2=0,i,j;
		for(i=0;i<len1 && !min1;i++)
			for(j=0;j<len2 && !min1;j++){
				if(i+j>=len1){min1=len1+len2-j;break;}
				if(s1[i+j]+s2[j]-'0'>'3') break;
				if(j==len2-1) min1=len1;
			}
		if(!min1) min1=len1+len2;
		for(i=0;i<len2 && !min2;i++)
			for(j=0;j<len1 && !min2;j++){
				if(i+j>=len2){min2=len1+len2-j;break;}
				if(s2[i+j]+s1[j]-'0'>'3') break;
				if(j==len1-1) min2=len2;
			}
		if(!min2) min2=len1+len2;
		printf("%d\n",min1<min2?min1:min2);
	} 
	return 0;
} 
