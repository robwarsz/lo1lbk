/* Znajdowanie NWD dla 3 liczb */

#include<iostream>
using namespace std;

int gcd(int a, int b){
	if (a%b==0)
		return b;
	return gcd(b,a%b);	
}

int main() {
	int a=183,b=195,c=351;
	cout << gcd(gcd(a,b),c);
	
}


