#include<iostream>
using namespace std;

string dthx(int a, string b) {
	if (a==0)
		return b;
	if (a%16>9)
		return dthx(a/16,char(a%16+55)+b);			
	return dthx(a/16,char(a%16+48)+b);		
}

int main() {
	int x = 195024;		
	cout<<dthx(x,"");	
}
