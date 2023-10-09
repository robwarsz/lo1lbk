/*
wyszukiwanie wzorca › metoda naiwna
*/

#include<iostream>
using namespace std;

string napis="BACADABCABACADABCABACADBACADABBACADABCA";
string wzorzec="DABC";

bool czyWzorzec(int x) {
	int p=1;
	x++;
	for (int i=x ; i<wzorzec.size() ; i++) 	
		if (napis[i]!=wzorzec[p++])
			return false;
	return true;		
}

int main(){
	int skrWzorzec=0 ;
	for (int i=0 ; i<wzorzec.size() ; i++) 
		skrWzorzec = skrWzorzec*4 + wzorzec[i]-65;
	cout << skrWzorzec;
	
}



