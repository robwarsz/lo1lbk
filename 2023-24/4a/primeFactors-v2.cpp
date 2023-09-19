#include<iostream>
#include<vector>
using namespace std;

vector<int> getPrimeFactors(int number) {
	vector<int> primeFactors;
	int i=2;
	while(i*i<=number)	{
		while (number % i == 0){
			primeFactors.push_back(i);
			number/=i;
		}
		i++;		
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
