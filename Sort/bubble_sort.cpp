#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	bool flay;
	do{
		flay=false;
		for(int j=1; j <n; j++){
			if(arr[j-1]>arr[j]){
				swap(arr[j-1],arr[j]);
				flay = true;
				}
			}
		}while(flay);
	}
int main(){
	int arr[]={9,8,0,2,10,3,4,1};
	bubbleSort(arr,8);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
		}
	
	return 0;
	}
