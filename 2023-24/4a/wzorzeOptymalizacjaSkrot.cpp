/*
wyszukiwanie wzorca › metoda naiwna
*/

#include<iostream>
#include<algorithm>
using namespace std;

string napis="BACADABCABACADABCABACADBACADABBACADABCA";
string wzorzec="DABC";
const int iloscLiterAlfabetu = 4;

bool czyWzorzec(int x) {
	int p=1;
	x++;
	for (int i=x ; i<wzorzec.size() ; i++) 	
		if (napis[i]!=wzorzec[p++])
			return false;
	return true;		
}

int main(){
	int skrWzorzec=0 , skrAktualny=0;
	for (int i=0 ; i<wzorzec.size() ; i++) /* obliczamy skrot wzorca */
		skrWzorzec = skrWzorzec*4 + wzorzec[i]-65;
	cout << skrWzorzec<<"\n";
	for (int i=0 ; i<wzorzec.size() ; i++) /* obliczemy skrot pierwszego fragmentu o dlugosci wzorca */
		skrAktualny = skrAktualny*4 + napis[i]-65;
	cout << skrAktualny<<"\n";
	
	int wn=wzorzec.size();
	for (int i=wn ; i<napis.size() ; i++) {
		//skrAktualny = (skrAktualny - (napis[i-wn]-65) * pow(4,3)) * 4 + (napis[i]-65);
		skrAktualny = (skrAktualny - (napis[i-wn]-65) * pow(iloscLiterAlfabetu,(wn-1))) * iloscLiterAlfabetu + (napis[i]-65);
		cout << skrAktualny << " ";
		}	
	/* wypisane wartoœci wskazuj¹ kandydatów na wzorzec › nale¿y ich zweryfikowaæ */	
		
}



