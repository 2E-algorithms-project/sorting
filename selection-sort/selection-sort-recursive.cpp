//Selection sort with recursion.

#include <iostream> // Input/Output directive.
#define MAX  100 // MAX is the max number of numbers inn the array.
 
using namespace std; 

void selection(int n,int arr[]); // Function for the selection.

int main()
{
	int n, arr[MAX];
	cin >> n;
	
	// Input.
	for(int i = 0; i < n; i++)
	{ 
		cin >>arr[i];
	}
	
	// Sorting.
	selection(n,arr);
	
	// Output.
	cout << "Insertion sort (recursive): " << endl;
	for(int i = 0; i < n; i++){           
		cout << arr[i] << " ";
	}
	
	return 0;
}

void selection(int n,int arr[])         
{
	static int indexEnd = 0; // Counter of the for loops.
	int minValuePos = indexEnd; // This variable contains the position of the min value.          setted at the first position of the for loop.
	
	for(int i = indexEnd; i < n; i++){
		if(arr[i]<arr[minValuePos])
		{
			minValuePos = i;
		}
	}
	swap(arr[minValuePos], arr[indexEnd]); // swapping
	indexEnd++; // adding 1 to limit of sorted list
	                                 
	if(indexEnd < n)
	{
		selection(n, arr); // Recursion.
	}
	
	return;
}
