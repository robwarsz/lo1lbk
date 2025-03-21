#include<iostream>
using namespace std;

int rev(int a, int b) {
	if (a==0)
		return b;
	return rev(a/10,b*10+a%10);		
}

int main() {
	int x = 52468092;
	cout<<rev(x,0);
	
}
