#include <iostream>
using namespace std;
void selectionSort(int *arr, int n){
	for(int i=0; i < n-1; i++){
			int imin =i;
		for(int j=i+1; j<n ; j++){
			if(arr[j] < arr[imin])
				imin = j;
			}
		if(imin != i)
			swap(arr[i] , arr[imin]);
		}
	}
	
int main(){
	int arr[]={9,10,1,2,4,22,0,7};
	selectionSort(arr,8);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
		}
	
	return 0;
	}
