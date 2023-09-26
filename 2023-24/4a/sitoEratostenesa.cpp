#include<iostream>
using namespace std;

const int N=1000;
bool T[N+1];
void sito(){
	for (int i=2 ; i*i<=N ; i++ )
		if (T[i]==0)
			for (int j=i*i ; j <= N ; j+=i)
				T[j]=1;				
}

int main() {
	sito();	
	for (int i=2 ; i<=N ; i++)
		if (T[i]==0)
			cout<<i<<", ";
	
}
