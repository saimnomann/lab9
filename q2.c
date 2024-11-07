#include<stdio.h>
#include<String.h>
int main(){
	char words[10][20],temp[10][20];
	int i,j,count,size,k=0,flag=0;
printf("How many words you want to enter");
scanf("%d",&count);
for(i=0;i<count;i++){
printf("Please enter word %d ",i+1);
scanf("%s",words[i]);
}

for(i=0;i<count;i++){
	size=strlen(words[i]);
	for(j=size-1;j>=0;j--){
		temp[i][k]=words[i][j];
		k++;
	}
	k=0;
}

for(i=0;i<count;i++){
for(j=0;words[i][j]!='\0';j++){
	if(words[i][j]==temp[i][j]){
	flag=1;
	continue;
	}
	else{
		printf("Word %d is not a palindrome\n",i+1);
		flag=0;
		break;
	}
}

if(flag==1){
	printf("Word %d is palindrome\n",i+1);
}
}
}
