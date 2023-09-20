/* https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes */

#include<iostream>
#include<vector>
using namespace std;

vector<int> sieve(int x){
	vector<int> V;
	bool T[1000000]={0};
	for (int d=2 ; d*d<=x ; d++)
		for (int w=2*d ; w<=x ; w+=d )
			T[w]=1;
	for (int i=2 ; i<=x ; i++)
		if (T[i]==0)
			V.push_back(i);
	return V;		
}

int main(){
	vector<int> primeNumbers=sieve(100);
	for (auto el:primeNumbers)
		cout<<el<<", ";
}
