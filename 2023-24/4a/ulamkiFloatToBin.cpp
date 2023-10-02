/*
prototyp 
zamienia liczbê typu float na postaæ binarn¹
 * wersja wymaga dokoñczenia
 * tylko liczby dodatnie, bez znaku
*/

#include<iostream>
#include<stack>
using namespace std;

string calkowitaBin(int w);
string ulamekBin(float u);


int main() {
	float x = 197.233 ;
	int w = x;
	float u = x - w;	
	cout << w << " " << u << endl;
	cout << calkowitaBin(w) << " . " << ulamekBin(u);
}

string calkowitaBin(int w) {
	stack<int> S;
	while (w!=0){
		S.push(w%2);
		w/=2;
	}
	string wynik="";
	while(!S.empty()){
		wynik+=char(S.top()+48);
		S.pop();
	}	
	
	return wynik;
}

string ulamekBin(float u) {
	string wynik="";
	for (int i=0 ; i<10 ; i++)
		if (u*2>=1) {
			wynik += "1";
			u = u*2-1;
		}
		else {
			wynik += "0";
			u = u*2;
		}
	return wynik;	
}
