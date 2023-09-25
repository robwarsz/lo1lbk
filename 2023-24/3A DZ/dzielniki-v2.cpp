#include<iostream>
using namespace std;

int main() {
	int L=36;
	for (int i=1 ; i*i<=L ; i++) {
		if (L%i==0) {
			cout << i <<", ";
			if (L/i!=i)
				cout << L/i <<", ";
		}		
	}		
}
