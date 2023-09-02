 // Two stage pipeline
#include<stdio.h>

int main()
{
	int counter =1,a,b,choice,res,ins;
	printf("Enter number 1:");
	scanf("%d",&a);
	counter = counter+1;
	printf("Enter number 2:");
	scanf("%d",&b);
	counter = counter +1;
	printf("1-Addition:\n2-Subtraction:\n3-Multiplication:\n4-Division:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Performing addition\n");
				res = a+b;
				counter = counter+1;
				break;
		case 2: printf("Performing subtraction\n");
				res = a-b;
				counter = counter+1;
				break;
		case 3: printf("Performing Multiplication\n");
				res = a*b;
				counter = counter+1;
				break;
		case 4: printf("Performing Division\n");
				res = a/b;
				counter = counter+1;
				break;
		default: printf("Wrong input");
				 break;
	}
	printf("The cycle value is:%d\n",counter);
	printf("Enter the number of instructions:");
	scanf("%d",&ins);
	int performance_measure = ins/counter;
	printf("The performance measure is:%d\n",performance_measure);
	return 0;
	
}





// 4 stage pipeline
#include<stdio.h>
void main(){
int counter=0;
int input;
int num1,num2;
int op;
int res;
int ins;
int performance_measure=0;
printf("\n Enter 1st value: ");
scanf("%d",&num1);
counter+=1;
printf("\n Enter the 2nd value: ");
scanf("%d",&num2);
counter+=1;
printf("\n Enter the option: \n1)Addition\n2)Subraction\n3)Multiplication\n4)Division");
scanf("%d",&op);
switch(op){
case 1:
	printf("Performing addition operation");
	res=num1+num2;
	counter+=1;
	break;
case 2:
	printf("Performing subraction operation");
	res=num1-num2;
	counter+=1;
	break;
case 3:
	printf("Performing multiplication operation");
	res=num1*num2;
	counter+=1;
	break;
case 4:
	if(num2==0){
	printf("\n Denominator can't be zero");
	}
	else{
	printf("Performing division operation");
	res=num1/num2;
	counter+=1;
	break;
	}
default: 
	printf("Invalid case...");
	counter+=3;
	break;
}
printf("\n CYCLE VALUE IS : %d",counter);
printf("Enter the no.instruction");
scanf("%d",&ins);
performance_measure=ins/counter;
printf("\n Performance Measure is: %d",performance_measure);
}