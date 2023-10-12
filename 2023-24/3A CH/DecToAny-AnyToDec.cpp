#include<iostream>
using namespace std;

int AnyToDec(string,int);
string DecToAny(int,int);

int main() {
	string hexNumber = "FA2";
	int DecNumber = AnyToDec(hexNumber,16);
	cout<<DecNumber<<endl;
	cout << DecToAny(DecNumber,8)<<endl;
	cout << DecToAny(DecNumber,4)<<endl;	
	cout << DecToAny(DecNumber,3)<<endl;		
}

int AnyToDec(string value, int sys) {	
	int wynik=0;
	for (int i=0 ; i<value.size() ; i++)
		wynik = (value[i]>57) ? wynik*sys + value[i]-55 : wynik*sys + value[i]-48;
	return wynik;	
}

string DecToAny(int value, int sys){
	string Strvalue="";
	while (value>0){
		Strvalue = (value%sys>9) ? (char(value%sys+55) + Strvalue) : (char(value%sys+48)+ Strvalue) ;		
		value/=sys;
	}
	return Strvalue;
}

