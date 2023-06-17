#include<stdio.h>
int main(){
	int n1, n2;				//declaring variables
	//taking inputs
	printf("Enter first no.");
	scanf("%d",&n1);
	printf("Enter second no.");
	scanf("%d",&n2);
	//swapping the numbers
	n1=n2+n1; 
	n2=n1-n2;
	n1=n1-n2;
	//output
	printf("after swapping first number = %d and second number = %d\n",n1,n2);
	return 0;
}
