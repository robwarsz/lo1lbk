#include<iostream>
using namespace std;

bool primeNumber(int x) {
	if (x<2)
		return false;
	for (int d=2 ; d*d<=x ; d++) {
		if (x%d==0)	{
			return false;
		}
	}
	return true;	
}

int main() {
	for (int i=1 ; i<=1000 ; i++) 
		if (primeNumber(i))
			cout<<i<<", ";
}
