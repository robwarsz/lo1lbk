/*
Zadanie dla uczniów: do programu odczyt.cpp
dodać funkcje:
 - funkcja: ilość parzystych
 - funkcja: ilość większych od 200
 - funkcja: najdłuszy podciąg rosnący (wypisz i podaj ile ma elementów)
    → opjca dodatkowa 1: funkcja zwraca ten podciąg do funkcji main (np. jako wektor)
    → jeżeli jest kilka takich podciągów to zwróc wszystkie 
*/


#include<iostream>
#include<fstream>
#include<time.h>

using namespace std;
const int N=1e3;
int T[N];

float favg();
void minmax(int &minv, int &maxv);

int main() {	
	ifstream in ("dane.txt");
	int x;
	for (int i=0 ; i<N ; i++ ) {		
		 in >> T[i];
	}	
	in.close();
	/* srednia */
	float avg = favg();
	cout << "\nSrednia: " << avg;
	/* min max */
	int maxw,minw;
	minmax(minw,maxw);
	cout << "\nMin:" << minw;
	cout << "\nMax:" << maxw;
}

float favg() {
	float sum = 0;
	for (auto el:T)
		sum += el;
	return sum/N;		
}

void minmax(int &minv, int &maxv) {
	minv=1000;
	maxv=-1000;
	for (auto el:T){
		if (el<minv)
			minv = el;
		maxv = max(maxv,el);	
	}	
}



