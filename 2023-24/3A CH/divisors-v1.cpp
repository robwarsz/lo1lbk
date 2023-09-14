#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	int n;
	cout<<"Podaj liczbe: ";
	cin>>n;
	
	for (int i=1 ; i*i<=n ; i++)
		if (n%i==0) {
			cout << i<< ", ";
			if (i!=n/i)
				cout << n/i << ", ";
			}	
	
	return 0;		
}

