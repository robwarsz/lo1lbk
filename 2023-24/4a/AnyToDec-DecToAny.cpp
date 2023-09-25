#include<iostream>
using namespace std;

int findChar(char c) {
	string hexChars="0123456789ABCDEF";
	for (int i=0 ; i<hexChars.size() ; i++)
		if (c==hexChars[i])	
			return i;	
}

int anyToDec(string N, int sys) {
	int value = 0;
	for (int i=0 ; i<N.size() ; i++) {
		int b = findChar(N[i]);
		value = value * sys + b;
	}
	return value;	 
}

string decToAny (int L,int sys) {
	string hexChars = "0123456789ABCDEF";
	string value = "";
	while (L>0) {
		value = hexChars[L%sys] + value;
		L/=sys;		
	}
	return value;
}

int main() {
	string L = "FA1";
	int sys = 16;
	cout << anyToDec(L,sys)<<"\n";
	
	int Ld = 4001;
	cout << decToAny(Ld,sys)<<"\n";
}
