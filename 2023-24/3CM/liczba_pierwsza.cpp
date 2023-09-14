#include<iostream>
#include<math.h>
using namespace std;

bool pierwsza(int x) {
	for (int i=2 ; i<=sqrt(x) ; i++) 
		if (x % i == 0)
			return false;
	return true;
}

int main(){
	int n;
	cout << "podaj liczbe: ";
	cin >> n;
	if (pierwsza(n))
		cout<<"Pierwsza";
	else	
		cout<<"Zlozona";
	return 0;
}
