
#include <iostream>
#include <cstdio>
using namespace std;
bool searchLinear(int *tab, int l,int r,int x){
     if (r < l)
        return -1;
     if (tab[l] == x)
        return l;
     return searchLinear(tab, l+1, r, x);
}

int main(){
	int tab[]={0,5,8,6,9,23,11,40,54,7,2,10,50,6,27,12,3,52,4,99};
	int search;
	cout<< "search number : ";
	cin>>search;
	if(searchLinear(tab,0,20,search)) cout <<"exist";
	return 0;
	}
