#include<Stdio.h>
float add(float num1,float num2);
float diff(float num1,float num2);
float prod(float num1,float num2);
float div(float num1,float num2);
int main(){
	float num1,num2,res;
	int op;
	printf("Please enter any two numbers ");
	scanf("%f %f",&num1,&num2);
	printf("Please select operation\nFor addition press 1\nFor subtraction press 2\nFor multiplication press 3\nFor division press 4\n");
	scanf("%d",&op);
	switch(op){
		case 1:{
		  	res=add(num1,num2);
			break;
		}
		case 2:{
			res=diff(num1,num2);
			break;
		}
		case 3:{
			res=prod(num1,num2);
			break;
		}
		case 4:{
			res=div(num1,num2);
			break;
		}
	}
	printf("Result: %.2f",res);
}
float add(float num1,float num2){
	return num1+num2;
}
float diff(float num1,float num2){
	return num1-num2;
}
float prod(float num1,float num2){
	return num1*num2;
}
float div(float num1,float num2){
	return num1/num2;
}