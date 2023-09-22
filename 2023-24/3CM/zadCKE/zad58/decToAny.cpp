#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

string decToAny(int x, int sys) {
	string wynik="";
	bool negativeNumber = false;
	if (x<0) 
		negativeNumber = true;
		
	x = abs(x);
	while (x>0){
		wynik = char(x%sys+48) + wynik;
		x/=sys;		
	}
	if (negativeNumber)
		return "-"+wynik;
	return wynik;	
}

int main() {
	cout<<decToAny(-15,2)<<endl;
	cout<<decToAny(-15,4)<<endl;	
	cout<<decToAny(-15,8)<<endl;
}
