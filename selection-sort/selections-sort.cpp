#include <iostream> // for basic Input/Output stream.
#define MAX 100 // for max size of array (arr).

using namespace std; // for not repeting std before cout, cin, endl, etc...

void selectionSort(int l[], int s);

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
  	selectionSort(arr, n);
  	
	// Output.
  	cout << "Selection Sort: " << endl;
  	for(int i = 0; i < n; i++)
  	{
  		cout << arr[i] << " "; 
  	}
	
	return 0;
}

void selectionSort(int arr[], int n) 
{
	int minValue, minValuePos; // for storing minimum value and the minimum value position
	int indexEnd = 0;  // the index of the end of the sorted array
	
	
	while(indexEnd < n) 
	{
		minValue = arr[indexEnd];  // setting maxValue and maxValuePos by default to pos = 0 and val = 0;
		minValuePos = indexEnd;
		
		for(int i = indexEnd; i < n; i++)
		{
			if(arr[i] < arr[minValuePos]) // checking if the value in the i position in arr is less than the minimum value
			{
				minValue = arr[i];
				minValuePos = i;
			}
		}	
					
		// Swapping.
		arr[minValuePos] = arr[indexEnd]; 
		arr[indexEnd] = minValue; 
		
		// Adding one to the end of sorted list
		indexEnd++;
	}	
}
