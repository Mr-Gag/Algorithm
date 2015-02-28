#include <iostream>
#include <cstdio>
using namespace std;

int midpoint(int imin,int imax){
	return (imax + imin)/2;
}
int binary_search(int A[], int key, int imin, int imax)
{
  // test if array is empty
  if (imax < imin)
    // set is empty, so return value showing not found
    return -1;
  else
    {
      // calculate midpoint to cut set in half
      int imid = midpoint(imin, imax);
 
      // three-way comparison
      if (A[imid] > key)
        // key is in lower subset
        return binary_search(A, key, imin, imid - 1);
      else if (A[imid] < key)
        // key is in upper subset
        return binary_search(A, key, imid + 1, imax);
      else
        // key has been found
        return imid;
    }
}
int binary_search_it(int A[], int key, int imin, int imax)
{
  // continue searching while [imin,imax] is not empty
  while (imax >= imin)
    {
      // calculate the midpoint for roughly equal partition
      int imid = midpoint(imin, imax);
      if(A[imid] == key)
        // key found at index imid
        return imid; 
      // determine which subarray to search
      else if (A[imid] < key)
        // change min index to search upper subarray
        imin = imid + 1;
      else         
        // change max index to search lower subarray
        imax = imid - 1;
    }
  // key was not found
  return -1;
}
int main(){
	int data[]={0,1,2,3,4,5,7,8,9,10};
	int x;
	cout<<"number search : ";
	cin>>x;
	cout<<"Iteration :\n";
	cout<<x<<" is found in location "<<binary_search_it(data, x, 0, 11)+1<<endl;
	cout<<"Recresive :\n";
	cout<<x<<" is found in location "<<binary_search(data, x, 0, 11)+1<<endl;
	return 0;
	}
