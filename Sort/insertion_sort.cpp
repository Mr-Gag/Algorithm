#include <iostream>
using namespace std;
void insertionSort(int arr[], int length) {
      int i, j;
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  swap(arr[j],arr[j - 1]); 
                  j--;
            }
      }
}
	
int main(){
	int arr[]={9,8,1,2,5,3,0,7};
	insertionSort(arr,8);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
		}
	
	return 0;
	}
