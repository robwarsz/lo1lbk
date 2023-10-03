/*
wyszukiwanie wzorca › metoda naiwna
*/

#include<iostream>
using namespace std;

string napis="matematyka i informatyka";
string wzorzec="tyka";

bool czyWzorzec(int x) {
	int p=1;
	x++;
	for (int i=x ; i<wzorzec.size() ; i++) 	
		if (napis[i]!=wzorzec[p++])
			return false;
	return true;		
}

int main(){
	for(int i=0; i<=napis.size()-wzorzec.size();i++){
		if (napis[i]==wzorzec[0] && czyWzorzec(i))
			cout<< i << ",";
	}
}



