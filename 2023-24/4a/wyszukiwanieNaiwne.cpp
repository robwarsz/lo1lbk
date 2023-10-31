#include<iostream>
using namespace std;

int main() {
	int x = 13;
	int T[]={2,3,1,7,5,8,14,12,11,5,2,1}; 
	
	/* wyszukiwanie metod¹ naiwn¹ › w pesymistycznym przypadku wykonany n operacji */
	int n = sizeof(T)/sizeof(int);
	bool znaleziona = false;
	for(int i=0 ; i<n ; i++)
		if (T[i]==x) {
			znaleziona = true;
			break;
		}
	if (znaleziona)
		cout<<"TAK";
	else
		cout<<"NIE";	
			
		
}


