#include <iostream>
#define MAX 20

using namespace std;
//hello
void bubbleSort(int l[], int s)
{
	int temp;
	
	for(int i = 0; i < s; i++)
	{
		for(int j = 1; j < s; j++)
		{
			if(l[j-1] > l[j])
			{
				temp = l[j];
				l[j] = l[j-1];
				l[j-1] = temp;
			}
		}
	}
}

int main()
{
   int arr[MAX];
   int n;
   cin >> n;
    
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
    
   bubbleSort(arr, s);
    
   cout << "Sorted Array: " << endl;
   for(int i = 0; i < n; i++)
   {
        cout << arr[i] << " ";   
   }
}
