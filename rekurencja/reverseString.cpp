#include<iostream>
using namespace std;

string rev(string a, string b) {
	if (a.size()==0)
		return b;
	char lastLetter = a[a.size()-1];
	a.erase(a.size()-1,1);
	b += lastLetter;
	return rev(a,b);				
}

int main() {
	string sentence = "abcdefgh";
	cout<<rev(sentence,"");
}


