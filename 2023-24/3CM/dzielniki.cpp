#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dzielniki(vector<int>& D, int x);

int main() {
	vector<int> V;
	int liczba = 1248;
	dzielniki(V,liczba);
	for (auto el:V)
		cout << el << ",";	
}

void dzielniki(vector<int>& D, int x) {
	for (int i=1 ; i*i<=x ; i++)
		if (x%i==0) {
			D.push_back(i);
			if (i!=x/i)
				D.push_back(x/i);
		}
	sort(D.begin(),D.end());
}
