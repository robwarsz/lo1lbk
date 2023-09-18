/* wszystkie dzielniki liczby */ 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getDivisors(int number) {	
   	vector<int> V;
	for (int i=1 ; i*i<=number ; i++)
		if (number%i==0) {
			V.push_back(i);
			if (number/i!=i) 
			V.push_back(number/i);
		}	
	sort(V.begin(),V.end());			
	return V;
}

int main()
{
	int number;
	cout<<"Podaj liczbe: ";
	cin>>number;
	cout<<"\nDzielniki liczby " << number << ": ";
    vector<int> Divisors = getDivisors(number);
    for(auto el : Divisors) 
        cout<<el << ", ";     
    return 0;
}
