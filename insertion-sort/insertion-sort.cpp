// Insertion sort.
#include <iostream> // For basic I/O with console.
#define MAX 100 // const for max numbers in arr.  

using namespace std; 

void insertionSort(int l[], int s);

int main() 
{
        int arr[MAX];
        int n;
        cin >> n; // n --> number in array
        
        // Input.
        for(int i = 0; i < n; i++)
        {
                cin >> arr[i];       
        }
        
        // Sorting.
        insertionSort(arr, n);
        
        // Output.
        cout << "Insertion Sort: " << endl;
        for(int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";       
        }
        
        return 0;
}

void insertionSort(int l[], int s)
{
	int j;
	
	for(int i = s-2; i >= 0; i--)
	{
		if(l[i] > l[i+1]) // If the element is not in order.
		{
			j = i;
			while(!(l[j] > l[j-1] && l[j] < l[j+1]) && j+1 != s) // Puts the number in the correct position.
			{
				swap(l[j], l[j+1]);
				j++;
			}
		}
	}
}
