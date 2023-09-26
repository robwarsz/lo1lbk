/* program sprawdza czy liczba jest pierwsza - nie odpowiada na pytanie czy jest złożona */

#include<iostream>
#include<math.h>
using namespace std;

bool pierwsza(int x) {
	if (x<2)
		return false;
	for (int i=2 ; i*i<=x ; i++) 
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
		cout<<"NIE jest pierwsza";
	return 0;
}
