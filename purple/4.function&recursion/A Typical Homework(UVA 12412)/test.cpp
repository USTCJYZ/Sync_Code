#include <stdio.h>
#define MAXN 10000
int n;
struct info{
	char SID[12];
	int CID;
	char name[12];
	int score[5];
}STU[MAXN];
void Add(){
	printf("Please enter the SID, CID, name and four scores. Enter 0 to finish.\n");
	char SID[12];
	int CID;
	char name[12];
	int score[5];
	while(scanf("%s%d%s%d%d%d%d"))
}
void Remove(){
	printf("Welcome to Student Performance Management System (SPMS).\n\n1 - Add\n2 - Remove\n3 - Query\n4 - Show ranking\n5 - Show Statistics\n0 - Exit");
	
}
void Query(){
	printf("Welcome to Student Performance Management System (SPMS).\n\n1 - Add\n2 - Remove\n3 - Query\n4 - Show ranking\n5 - Show Statistics\n0 - Exit");
	
}
void print_menu(){
	printf("Welcome to Student Performance Management System (SPMS).\n\n1 - Add\n2 - Remove\n3 - Query\n4 - Show ranking\n5 - Show Statistics\n0 - Exit\n");
	int cmd;scanf("%d",&cmd);
	switch(cmd){
		case 1:Add();print_menu();break;
		case 2:Remove();print_menu();break;
		case 3:Query();print_menu();break;
		case 4:printf("Showing the ranklist hurts students' self-esteem. Don't do that.");print_menu();break;
		case 0:return;
	}
}
int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	print_menu();
	return 0;
}
