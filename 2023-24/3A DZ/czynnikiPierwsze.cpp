#include<iostream>
using namespace std;

int main() {
	int L=1920;
	int d=2;
	while (d*d<=L) {
		while (L%d==0) {
			cout<<d<<",";
			L/=d;
		}
		d++;
	}
	if (L>1)
		cout<<L;
}


