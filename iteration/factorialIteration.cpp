/* iteracja */
#include<iostream>
using namespace std;

long long factorial(int x) {
	long long res = 1;
	for (int i=1 ; i<=x ; i++)
		res *= i;
	return res;	
}

int main() {
	int k=7;
	cout << factorial(k);
}
