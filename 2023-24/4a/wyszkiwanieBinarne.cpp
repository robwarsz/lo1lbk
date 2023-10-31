#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;

int main() {
	const int x = 50;
	int T[x];
	srand(time(NULL));
	for (int i=0 ; i<x ; i++)
		T[i] = rand() % 1000 + 1;
	T[0]=197;	
	
	cout<<"Zbior przed sortowaniem: ";
	for(auto el:T)
		cout<<el<<", ";		
			
	sort(T,T+x);
	
	cout<<"\n\nZbior po sortowaniu: ";
	for(auto el:T)
		cout<<el<<", ";	
	
	//poszukwanie elementu w zbiorze › TAK/NIE
	int szukana = 197;
	int iloscProb=0;
	int p=0;
	int k=x-1;
	
	bool znaleziona=false;
	while (p<=k) {
		iloscProb++;
		cout<<"\nAktualne wyszukiwanie p="<<p<<" k="<<k<< " wartosc: "<< T[(p+k)/2];
		if (T[(p+k)/2]==szukana) {
			znaleziona=true;
			break;		
			}
		if (T[(p+k)/2]>szukana) 	
			k=(p+k)/2-1;
		else
			p=(p+k)/2+1;				
	}
	(znaleziona) ? cout << "\nTAK" : cout<<"\nNIE";
	cout<<"\nIlosc prob: "<< iloscProb;
}

















