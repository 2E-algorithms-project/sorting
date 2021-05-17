//Recursive Bubble Sort algorithm

#include <iostream> // For basic Input/Output stream
#define MAX 100  // Max numbers of the array.

using namespace std;

// Main recursive function.
void bubbleSortRecursive(int n, int array[]);

// inner recursive function.
// int innerLoop(int n, int array[]);

int main()
{
	int n, arr[MAX];
	cin>>n;
	
	// Input.
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	} 
	
	// Sorting.
	bubbleSortRecursive(n,arr);
	
	// Output
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

void bubbleSortRecursive(int n,int array[]){
	
	//If the size of working array is 1 return
	if(n == 1) 
		return;

	// In 1 pass, last element is at its sorted position
	for(int i = 0; i < n-1; i++){ 
		if(array[i] > array[i+1]){
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}

	// Recur for the remaining subarray
	bubbleSortRecursive(n-1 , array); 
}

// int innerLoop(int n,int array[]){
	
// 	static int j=0;
// 	int temp;
	
// 	if(j<n-1){
// 		if(array[j]>array[j+1]){
// 			temp=array[j]; // Swapping Variables.
// 			array[j]=array[j+1];
// 			array[j+1]=temp;
// 		}
			
// 		j++;
		
// 		return innerLoop(n,array);
// 	}
	
// 	j=0;
	
// 	return bubbleSortRecursive(n,array);
// }
