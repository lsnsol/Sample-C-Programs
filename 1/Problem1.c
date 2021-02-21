#include <stdio.h>
#include <conio.h>

// Q1: Create an array of characters (randomly chosen) and print them in ascending order of their ASCII value.

// function to generate random numbers in a range
int random(int min, int max){
   return (rand() % (max + 1 - min) + min);
}

int main(){
	
	// number of characters to be in the array e.g 10
	int noOfChars = random(0,10);
	
	// create the array of that many characters
	char charArr[noOfChars];
	
	// filling the array with random chars
	for(int i=0; i<noOfChars; i++){
		// small letters
		// charArr[i] = (char)random(97,122);
		
		// capital letters
		 charArr[i] = (char)random(65,90);
	}
	
	// sorting the array in ascending order of ASCII value
	int n = sizeof(charArr) / sizeof(charArr[0]);
	for (int i = 0; i < n-1; i++) {
      for (int j = i+1; j < n; j++) {
         if (charArr[i] > charArr[j]) {
            char temp = charArr[i];
            charArr[i] = charArr[j];
            charArr[j] = temp;
         }
      }
   	}
	 
	// print the sorted array
	for (int i=0; i< n; i++){
		printf("%c",charArr[i]);
	}	
		
	return 1;
}
