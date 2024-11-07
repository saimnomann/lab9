#include<stdio.h>
int swap_integers(int *num1,int *num2);
int main(){
int a,b,*num1,*num2;
printf("Please enter number 1: ");
scanf("%d",&a);
printf("Please enter number 2: ");
scanf("%d",&b);
 num1=&a;
 num2=&b;
swap_integers(num1,num2);
printf("Number 1:%d\nNumber 2:%d",*num1,*num2);
}
int swap_integers(int *num1,int *num2){
	*num1=*num1+*num2; 
	*num2=*num1-*num2;  
	*num1=*num1-*num2;
}