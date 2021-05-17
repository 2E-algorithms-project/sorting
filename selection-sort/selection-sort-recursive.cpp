//selection_sort with recursion
#include <iostream>   //input/output directive
#define MAX  100       //MAX is the max number of numbers inn the array
 
using namespace std;

void selection(int n,int arr[]);           //function for the selection

int main()
{
	int n, arr[MAX];
	cin>>n;
	
	for(int i=0;i<n;i++){            //input of the array
		cin>>arr[i];
	}
	
	selection(n,arr);
	
	for(int i=0;i<n;i++){           //output of the array
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

void selection(int n,int arr[])          //function for the selection
{
	static int j=0;                         //counter of the for loops
	int pos_min=j;                            // this variable contains the position of the min value          setted at the first position of the for loop
	int temp=arr[j];                         // this variable contains the min value                           setted at the first value of the for loop
	
	for(int i=j;i<n;i++){
		if(arr[i]<arr[pos_min]){
			
			pos_min=i;
			temp=arr[i];
			
		}
	}
	
	arr[pos_min]=arr[j];                    //exchange of values
	arr[j]=temp;                           //exchange of values
	j++; 
	                                 
	if(j<n){
	selection(n,arr);              //recursion
	}
	
	return;
}
