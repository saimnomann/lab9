#include<stdio.h>
void check_prime(int num);
int main(){
	int num;
	printf("Please enter number ");
	scanf("%d",&num);
	check_prime(num);
}
void check_prime(int num){
	int i;
	for(i=2;i<num;i++){
		if(num % i == 0){
			printf("It is not a prime");
			break;
		}
		else{
			continue;
		}

	}
	if(i==num || num==1){
		printf("It is prime");
	}
}