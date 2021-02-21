#include <stdio.h>
#include <conio.h>
#include <math.h>

double generator(int n);
void Error_Analysis_Problem_12();

int main()
{
	int n; 
	double sum = 0;
	printf("Enter the value of N: ");
	scanf("%d", &n);
	// by formulae [10(10^n-1)-9n]/9
	sum = (10 * (pow(10, n) - 1) - 9 * n) / 9;
	printf("Sum of square of natural numberes till %d is %f", n, sum);
	
	// by generator
	sum=0;
	int i =0;
	for(; i<n; i++)
		sum+=generator(i);
	printf("\nSum of square of natural numberes till %d is %f", n, sum);
	Error_Analysis_Problem_12();
	return 1;
}

double generator(int n){
	double no_generated = 9;
	int i=1;
	for(; i<=n; i++)
		no_generated += 9 * pow(10,i);
	return no_generated;
}

void Error_Analysis_Problem_12(){
	int i =1;
	
	float sumF=0, sumR=1/pow(10000,4);
	
	// combined for loop
	for(;i<=10000;i++){
		sumF += 1/pow(i,4);
		if(10000-i)
			sumR += 1/pow(10000-i,4);
	}
	
	printf("\n\n%0.15f \n%0.15f \n%0.15f",sumF, sumR,pow(3.14,4)/90);
	
	////////////////////////////////////////////////////////////////////////////////
	
	i=1, sumF=0, sumR=1/pow(10000,4);
	// individual for loop
	for(;i<=10000;i++)
		sumF += 1/pow(i,4);
	
	i=10000;
	for(;i>=1;i--)
		sumR += 1/pow(i,4);
	
	printf("\n\n%0.15f \n%0.15f \n%0.15f",sumF, sumR,pow(3.14,4)/90);
	
	
	// relative error
	
	
	// absolute error
	
}

double relativeError(double value1, double value2)){
}

double absoluteError(double value1, double value2){
}
