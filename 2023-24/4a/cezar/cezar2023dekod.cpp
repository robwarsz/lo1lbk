#include<iostream>
using namespace std;

string cezar(string napis, int p) {
	for (int i=0 ; i<napis.size() ; i++){
		if (napis[i]>='A' && napis[i]<='Z') {	
			int L = int(napis[i])-65;
			L += p;	
			napis[i] = (L % 26) + 65;
			
			}
		else		
		if (napis[i]>='a' && napis[i]<='z') {
			int L = int(napis[i])-97;
			L += p;	
			napis[i] = (L % 26) + 97;
		}
		//cout<<"\n"<<int(napis[i]);	
	}	
	return napis;
}

int main() {
//	string napis="Python - jezyk programowania wysokiego poziomu ogolnego przeznaczenia, o rozbudowanym pakiecie bibliotek standardowych, ktorego idea przewodnia jest czytelnosc i klarownosc kodu zrodlowego. Jego skladnia cechuje sie przejrzystoscia i zwiezloscia. Python wspiera rozne paradygmaty programowania: obiektowy, imperatywny oraz w mniejszym stopniu funkcyjny. Posiada w pelni dynamiczny system typow i automatyczne zarzadzanie pamiecia, bedac w tym podobnym do jezykow Perl, Ruby, Scheme czy Tcl. Podobnie jak inne jezyki dynamiczne jest czesto uzywany jako jezyk skryptowy. Interpretery Pythona sa dostepne na wiele systemow operacyjnych. Python rozwijany jest jako projekt Open Source zarzadzany przez Python Software Foundation, ktora jest organizacja non-profit. Standardowa implementacja jezyka jest CPython (napisany w C), ale istnieja tez inne, np. Jython (napisany w Javie), CLPython napisany w Common Lisp, IronPython (na platforme .NET) i PyPy (napisany w Pythonie, zob. bootstrap).";
	string napis;
	getline (cin,napis);
	int p = 20;
	cout<<cezar(napis,p);

	
}
