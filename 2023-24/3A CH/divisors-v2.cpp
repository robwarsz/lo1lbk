#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	vector<int> V;
	int n;
	cout<<"Podaj liczbe: ";
	cin>>n;
	
	for (int i=1 ; i*i<=n ; i++)
		if (n%i==0) {
			V.push_back(i);
			if (i!=n/i)
				V.push_back(n/i);
			}	
	sort(V.begin(),V.end())	;	
	
	cout<<"\nLista dzielnikow: ";
	for (auto el:V)
		cout<<el<<", ";
				
	return 0;		
}
