#include <stdio.h>
int main(){
	char cmd[100];
	int count=0;
	while(scanf("%c",&cmd[++count]) &&cmd[count]!='0');
	printf("%d\n",count);
	for(int i=1;i<count;i++)
		printf("%c",cmd[i]);
		//this is a test!
	return 0;
}
