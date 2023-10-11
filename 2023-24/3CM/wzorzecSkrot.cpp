#include<iostream>
#include<algorithm>
using namespace std;

string wzorzec = "BACABA";
string napis = "BABABBACABAACA";
int pod = 3; 	// ilosc liter w alfabecie

int liczSkrot(string txt);

int main() {
	int nw=wzorzec.size();
	cout<<liczSkrot(wzorzec)<<"\n";
	string fragment="";
	for (int i=0;i<wzorzec.size();i++)	
		fragment+=napis[i];
	int skrotFragment = liczSkrot(fragment);	
	cout<<fragment<< " " << skrotFragment << "\n";
	
	/* szukanie wzorcow */
	for (int i=nw ; i<napis.size() ; i++ ) {
		skrotFragment = (skrotFragment - (napis[i-nw]-65)*pow(pod,5)) * pod + (napis[i]-65);
		cout<<skrotFragment<<" ";
		}
}

int liczSkrot(string txt) {
	int w=0;
	for (int i=0;i<txt.size();i++)
		w = w*pod + txt[i]-65;
	return w;
}


