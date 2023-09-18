#include<iostream>
#include<vector>
using namespace std;

vector<int> getPrimeFactors(int number) {
	vector<int> primeFactors;
	for (int i=2; i*i<=number ; i++)	{
		while (number % i == 0){
			primeFactors.push_back(i);
			number/=i;
		}		
	}
	if (number > 1)
			primeFactors.push_back(number);
	return primeFactors;	
}

int main() {	
	int x = 769792;
	vector<int> primeFactors = getPrimeFactors(x);
	for (auto el:primeFactors)
		cout<<el<<", ";			
}
