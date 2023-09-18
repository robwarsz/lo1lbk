#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> getDivisors(int number) {
	vector<int> divisors;
	for (int i=1; i*i<=number ; i++)	{
			if (number%i==0)
				divisors.push_back(i);
			if (number != number%i)	
				divisors.push_back(number/i);
		}		
	sort(divisors.begin(),divisors.end());	
	return divisors;	
}

int main() {	
	int x = 24;
	vector<int> divisors = getDivisors(x);
	for (auto el:divisors)
		cout<<el<<", ";			
}
