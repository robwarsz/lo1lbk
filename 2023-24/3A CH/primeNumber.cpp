#include<iostream>
#include<algorithm>
using namespace std;

bool prime(int x) {
	for (int i=2 ; i*i<=x ; i++)
		if (x%i==0)
			return false;
	return true;	
}

int main() {
	int n;
	cout<<"Podaj liczbe: ";
	cin>>n;
	while(n<2){
		cout<<"Ta liczba nie spelnia warunkow zadania. Podaj liczbe: ";
		cin>>n;
	}		
	if (prime(n))
		cout<<"Pierwsza";
	else	
		cout<<"Zlozona";
	return 0;		
}

