#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll _sieve_size;
bitset<10000010> bs;
vector <int> primes;
void sieve (ll upperbound){
	_sieve_size = upperbound + 1;
	bs.reset();
	bs.flip();
	bs.set(0,false); bs.set(1,false);
	for(ll i=2;i<=_sieve_size;i++){
		if(bs.test((size_t)i)){
			for(ll j=i*i;j<= _sieve_size;j+=i) 
				bs.set((size_t)j,false);
			primes.push_back((int)i);
			}
		}
	}
bool isPrime(ll N){
	if(N < _sieve_size) return bs.test(N) ;
	for(int i=0;i < (int)primes.size()-1;i++){
		if(N % primes[i] == 0)
			return false;
		}
	return true;
	}
vector<int> prFactors(int N){
	vector<int> factors;
	int PFi =0 , PF= primes[PFi];
	while(N !=1 && (PF*PF<=N)){
		while(N % PF ==0){
			N /= PF;
			factors.push_back(PF);
		}
		PF = primes[++PFi];
	}
	if( N!=1) factors.push_back(N);
	return  factors;
	}

int main(){
	sieve(10000000);
	printf("is Primes %d\n",isPrime(4));
	vector<int> resulta = prFactors(240);
	vector<int>::iterator it, last = unique(resulta.begin(), resulta.end());
	for(it=resulta.begin();it!=last;it++)
		printf("%d\n",*it);
	return 0;
	}
