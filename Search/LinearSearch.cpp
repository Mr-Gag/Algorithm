
#include <iostream>
#include <cstdio>
using namespace std;
void searchLinear(int *tab, int N,int search){
	bool flag = false;
	for(int i=0; i < N; i++){
		if(tab[i] ==  search){
			cout<<search<<" is found at location "<<i+1<<endl;
			flag = true;
			break;
		}
		}
	if(!flag)
		cout<<"Not found \n";
	}

int main(){
	int tab[]={0,5,8,6,9,23,11,40,54,7,2,10,50,6,27,12,3,52,4,99};
	int search;
	cout<< "search number : ";
	cin>>search;
	searchLinear(tab,20,search);
	return 0;
	}
