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

void selectionSort(int l[], int s) 
{
	int maxValue, maxValuePos; // for storing value and position of max (to then insert at the end of the list).
	int indexLast = s; // (it should be -1 but we use it as boundary).
	int temp; // for swapping values
	
	for(int i = 0; i < s; i++)
	{
		maxValue = l[0]; // giveing maxValue and maxValuePos the value 0 as default
		maxValuePos = 0;
		
		for(int j = 0; j < indexLast; j++)
		{
			if(l[j] > maxValue)
			{
				maxValue = l[j];
				maxValuePos = j;
			}
		}	
		// Swapping.
		temp = l[indexLast]; 
		l[indexLast] = maxValue;
		l[maxValuePos] = temp;
		
		// Moving boundary to boundary-1.
		indexLast--;
	}	
}
