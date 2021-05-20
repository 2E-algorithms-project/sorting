// Insertion sort with recursion.
#include <iostream> // For basic I/O with console.
#define MAX 100 // const for max numbers in arr.  

using namespace std; 

void insertion(int l[], int s);

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
        insertion(arr, n);
        
        // Output.
        cout << "Insertion Sort: " << endl;
        for(int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";       
        }
        
        return 0;
}

void insertion(int l[], int s)
{
    if (s < 2)
        return;

    static int indexStart = 1;
	int i = indexStart, curr = l[indexStart], j = indexStart - 1;

    while (j >= 0 && curr < l[j]) {
        l[j + 1] = l[j];
        --j;
    }
    
    l[j + 1] = curr;
	
    ++indexStart;
    if (indexStart < s)
        insertion(l, s);
}
