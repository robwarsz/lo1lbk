#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> V;

int main() {
	int L=36;
	for (int i=1 ; i*i<=L ; i++) {
		if (L%i==0) {
			//cout << i <<", ";
			V.push_back(i);
			if (L/i!=i)
				//cout << L/i <<", ";
				V.push_back(L/i);
		}		
	}
	sort(V.begin(),V.end());
	for (auto d:V)
		cout<<d<<",";
			
}
