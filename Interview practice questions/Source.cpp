#include<iostream>
using namespace std; 

// Program to find the missing numbers in array 


int missingNumber(int arr[], int size) {

	

	int N = size + 1; 
	int sum = (N) *( N + 1) / 2; 
	for (int i = 0; i < size; i++) 
		sum -= arr[i];
	return sum; 

	

	
}
int main(void) {
	int arr[] = { 1 }; 
	
	int size = sizeof(arr) / sizeof(arr[0]); 

	cout << missingNumber(arr, size); 
	return 0; 
}
// program to find the duplicates in array 
