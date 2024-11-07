#include<Stdio.h>
#include<string.h>
int main(){
	char word[100],list[100][100];
	int count,flag=0,i;
	printf("Please enter how many many words you want to enter ");
	scanf("%d",&count);
	printf("Please enter words in the list\n");
	for(i=0;i<count;i++){
	printf("Word %d:",i+1);
	scanf("%s",list[i]);
	}
printf("Please enter the word you want to find ");
scanf("%s",word);
for(i=0;i<count;i++){
if(strcmp(word,list[i])==0){
	printf("Found\n");
	flag=1;
	break;
}
else{
	continue;

}
}
if(flag==0){
	printf("Not found\n");
}
}s