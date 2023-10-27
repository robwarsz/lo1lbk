/* kod w trakcie realizacji CDN ...*/

#include <iostream>
#include <math.h>
using namespace std;

string tekst = "matematyka, fizyka i informatyka, zegar tyka.";
string wzorzec = "tyka";
int ps=127; 	//ilosc znakow w alfabecie

int skrotFragementu(string s);

string makeStr(int x) {
	string w="";
	for (int i=x ; i<x+wzorzec.size();i++)
		w+=tekst[i];
	return w;	
}

int main() {
	cout << "Skrot wzorca: " << skrotFragementu(wzorzec)<<"\n";
	for (int i=0 ; i<tekst.size()-wzorzec.size() ; i++)
		cout<<"\ni="<<i<<" "<<makeStr(i)<< skrotFragementu(makeStr(i)) <<endl;
}

int skrotFragementu(string s) {
	int LP=997;
	int w = 0;
	for (int i=0 ; i<s.size() ; i++)
		w = (w * int(pow(ps,s.size()-1))+s[i])%LP;	
	return w;	
}
