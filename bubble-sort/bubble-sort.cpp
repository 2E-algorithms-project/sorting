// Non recursive bubble sort algorithm.
// The bubble sort algorithms is used to sort a list not in the fastes way, but, problably, in the "most human" way.
// The complexity of the algorithm is O(n^2).
#include <iostream>	// For basic input/output system.
#define MAX 100

using namespace std;

void bubbleSort(int l[], int s); // List and size (remember that lists are passed by reference because a list is a pointer).

int main()
{
	int arr[MAX];
   	int n;
   	cin >> n;
	
	
	// Input. 
   	for(int i = 0; i < n; i++)
   	{
       cin >> arr[i];
   	}
	
	// Sorting.
   	bubbleSort(arr, n);
    
	// Output.
   	cout << "Bubble Sort: " << endl;
   	for(int i = 0; i < n; i++)
   	{
        cout << arr[i] << " ";   
   	}
}

void bubbleSort(int l[], int s) 
{
	int temp; // Needed for swapping values.
	
	for(int i = 0; i < s; i++)
	{
		for(int j = 1; j < s; j++)
		{
			if(l[j-1] > l[j]) 
			{
				swap(l[j-1], l[j]);
			}
		}
	}
}
