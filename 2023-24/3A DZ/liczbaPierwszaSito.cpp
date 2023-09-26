#include<iostream>
using namespace std;

const int N=1e3;
bool T[N+1];

int main() {
	//generujemy sito
	for (int i=2 ; i*i<=N ; i++)	
		if (T[i]==0)
			for (int j = i*i ; j<=N ; j+=i)
				T[j]=1;
	//wypisujemy wyniki
	for (int i=2 ; i<=N ; i++)				
		if (T[i]==0)
			cout << i << ", ";	
}
