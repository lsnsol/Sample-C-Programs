#include <stdio.h>
#include <conio.h>

// Q2. Find the mean of maximum and maximum element of an array

// function to generate random numbers in a range
int random(int min, int max){
   return (rand() % (max + 1 - min) + min);
}

// main function
int main(){
	
	// number of characters to be in the array e.g 10
	int noOfEle = random(0,10);
	
	// create the array of that many integers
	int arr[noOfEle];
	
	for(int i=0; i<noOfEle; i++){
		// filling with random numbers from -50 to 50
		arr[i] = random(-50,50);
	}
	
	// store the min and max of the array
	int max,min = arr[0];
	
	// find the min and max from the array
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
      	if(max < arr[i])
      		max = arr[i];
      	if(min > arr[i])
      		min = arr[i];
	}
	
	// mean of max and min numbers
	double mean = (min + max)/2;
	printf("Mean of max(%d) and min(%d): %f", max, min, mean);
	
	return 1;
}
