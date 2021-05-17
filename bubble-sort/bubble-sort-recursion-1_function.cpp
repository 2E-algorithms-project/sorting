//bubble sort only with a function
#include <iostream>

#define MAX 100     //max numbers of the array

using namespace std;

int bubble(int n, int arr[])
{
	int temp;            // temp variable
	static int j=0;        //counter of the loops
	
	for(int i=0;i<n-1;i++){	
		if(arr[i]>arr[i+1]){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	
	j++;
	
	if(j<n){
		return bubble(n,arr);       //return to the function
	}
	
	return 1;
}

int main()
{
	int n,arr[MAX];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bubble(n,arr);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
