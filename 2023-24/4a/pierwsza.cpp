#include<iostream>
#include<math.h>
using namespace std;

bool pierwsza(int x);

int main() {
	int liczba;
	cin>>liczba;
	if (pierwsza(liczba))
		cout<<"TAK";
	else		
		cout<<"NIE";	
}

bool pierwsza(int x) {
	for (int i=2 ; i<=sqrt(x) ; i++)
		if (x%i==0)
			return false;
	return true;		
}
