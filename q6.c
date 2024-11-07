#include<Stdio.h>
#include<String.h>
char reversed(char name[],int size);
int main(){
	int size;
	char a[100];
char name[100];
puts("Please enter name");
gets(name);
 size=strlen(name);
 reversed(name,size);
printf("%s",name);
}

char reversed(char name[],int size){
	char temp[100];
	int i,j=0;
	for(i=size-1;i>=0;i--){
		temp[j]=name[i];
		j++;
	}
	for(i=0;temp[i]!='\0';i++){
		name[i]=temp[i];
	}
	return name;
}