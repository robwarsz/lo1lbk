/*
prototyp 
zamienia liczb� typu float na posta� binarn�
wersja wymaga doko�czenia
*/

#include<iostream>
using namespace std;

//string calkowitaBin(int w);
string ulamekBin(float u);

int main() {
	float x = 197.233 ;
	int w = x;
	float u = x - w;	
	cout << w << " " << u << endl;	
	cout << ulamekBin(u);
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
