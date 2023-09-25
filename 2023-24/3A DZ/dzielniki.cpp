#include<iostream>
using namespace std;

void dzielniki(int x) {
	for (int d=1 ; d<=x/2 ; d++ )
		if (x%d == 0)
			cout<<d<<", ";
	cout<<x;		
}

int main() {
	int L=24;
	dzielniki(L);	
}
