#include<iostream>
using namespace std;

string napis = "MATEMATYKA I INFORMATYKA";
string wzorzec = "ATY";

bool czyWzorzec(int x){
	int p=1;
	x++;
	while (p<wzorzec.size()) {
		if (wzorzec[p++]!=napis[x++])
			return false;
	}	
	return true;
}

int main() {
	for (int i = 0 ; i < napis.size()-wzorzec.size()+1 ; i++ ) 
		if (napis[i]==wzorzec[0] && czyWzorzec(i))
			cout << i << endl;		
}
