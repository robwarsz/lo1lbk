#include<iostream>
using namespace std;

string dtb(int a, string b) {
	if (a==0)
		return b;
	return dtb(a/2,char(a%2+48)+b);		
}

int main() {
	int x = 124;		
	cout<<dtb(x,"");	
}
