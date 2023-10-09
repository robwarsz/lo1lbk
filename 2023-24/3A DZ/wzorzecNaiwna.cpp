#include<iostream>
using namespace std;

string napis="matematyka i informatyka";
string wzorzec="matyka";

bool czyWzorzec(int x) {
	for (int i=x , j=0 ; i<wzorzec.size(); i++ , j++ )
		if (napis[i] != wzorzec[j])
			return false;
	return true;
}

int main() {
	for (int i=0 ; i<napis.size()-wzorzec.size()+1; i++)
			if (napis[i]==wzorzec[0] && czyWzorzec(i))
				cout<<i<<", ";	

}
