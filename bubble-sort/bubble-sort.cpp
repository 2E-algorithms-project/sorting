// Non recursive bubble sort algorithm.
// The bubble sort algorithms is used to sort a list not in the fastes way, but, problably, in the "most human" way.
// The complexity of the algorithm is O(n^2).
#include <iostream>	// For basic input/output system.

using namespace std;

void bubbleSort(int l[], int s) // List and size (remember that lists are passed by reference because a list is a pointer).
{
	int temp;
	
	for(int i = 0; i < s; i++)
	{
		for(int j = 1; j < s; j++)
		{
			if(l[j-1] > l[j]) 
			{
				temp = l[j];	// Swapping the two elements.
				l[j] = l[j-1];
				l[j-1] = temp;
			}
		}
	}
}

int main()
{
   	int n;
   	cin >> n;
	int arr[n];
	
	// Input. 
   	for(int i = 0; i < n; i++)
   	{
       cin >> arr[i];
   	}
	
	// Sorting.
   	bubbleSort(arr, n);
    
	// Output.
   	cout << "Sorted Array: " << endl;
   	for(int i = 0; i < n; i++)
   	{
        cout << arr[i] << " ";   
   	}
}
