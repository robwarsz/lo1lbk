/*
Program wykorzystuje tablice znakow
*/

#include<iostream>
using namespace std;

string dta(int a,int sys, string b) {
	char characterset[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L'};
	if (a==0)
		return b;
	return dta(a/sys,sys,characterset[a%sys]+b);				
}

int main() {
	int x = 195024;
	for (int s=2 ; s<=20 ; s++)
		cout << "Liczba " << x << "[10] => " << dta(x,s,"") << "[" << s << "]\n";	
}
