#include <iostream>
#define MAX 100

using namespace std;

void selectionSort(int l[], int s);

int main()
{
  int arr[MAX];
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i]; 
  }
  
  selectionSort(arr, n);
  
  cout << "Selection Sort: " << endl;
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " "; 
  }
  return 0;
}

void selectionSort(int l[], int s) 
{
	int maxValue, maxValuePos;
	int indexLast = s-1;
	int temp;
	
	for(int i = 0; i < s; i++)
	{
		maxValue = l[0];
		maxValuePos = 0;
		for(int j = 0; j < indexLast+1; j++)
		{
			if(l[j] > maxValue)
			{
				maxValue = l[j];
				maxValuePos = j;
			}
		}	
		
		temp = l[indexLast];
		l[indexLast] = maxValue;
		l[maxValuePos] = temp;
		indexLast--;
	}	
}
