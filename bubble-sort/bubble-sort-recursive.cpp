//bubble-sort-recursive
#include <iostream>
#define MAX 100               // max numbers of the array

using namespace std;

int bubble_1(int n,int array[]);

int bubble_2(int n,int array[]);

int main()
{
	int n,arr[MAX];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	bubble_1(n,arr);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
int bubble_1(int n,int array[]){
	static int i = 0;
	
	if(i<n){
		i++;
		return bubble_2(n,array);
	}
	
	return 1;
}
int bubble_2(int n,int array[]){
	
	static int j=0;
	int temp;
	
	if(j<n-1){
		if(array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
			
		j++;
		
		return bubble_2(n,array);
	}
	
	j=0;
	
	return bubble_1(n,array);
}
