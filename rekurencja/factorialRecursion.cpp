/* recursion */
#include<iostream>
using namespace std;

long long factorial(int x) {
	if (x==0)	
		return 1;
	return factorial(x-1)*x;	
}

int main() {
	int k=7;
	cout << factorial(k);
}
