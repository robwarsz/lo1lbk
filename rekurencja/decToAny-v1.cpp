#include<iostream>
using namespace std;

string dta(int a,int sys, string b) {
	if (a==0)
		return b;
	if (a%sys>9)
		return dta(a/sys,sys,char(a%sys+55)+b);				
	return dta(a/sys,sys,char(a%sys+48)+b);				
}

int main() {
	int x = 195024;
	for (int s=2 ; s<=20 ; s++)
		cout << "Liczba " << x << "[10] => " << dta(x,s,"") << "[" << s << "]\n";	
}
