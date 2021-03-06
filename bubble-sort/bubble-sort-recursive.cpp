//Recursive Bubble Sort algorithm.
#include <iostream> // For basic Input/Output stream.
#define MAX 100  // Max numbers of the array.

using namespace std;

// Main recursive function.
void bubbleSortRecursive(int n, int array[]);

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
	
	// Output.
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

void bubbleSortRecursive(int n,int arr[]){
	
	//If the size of working array is 0 return.
	if(n == 0) 
		return;

	// In 1 pass, last element is at its sorted position.
	for(int i = 0; i < n-1; i++){ 
		if(arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}

	// Recur for the remaining subarray.
	bubbleSortRecursive(n-1 , arr); 
}


