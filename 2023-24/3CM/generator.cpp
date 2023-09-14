#include<iostream>
#include<fstream>
#include<time.h>

using namespace std;
const int N=1e3;

int main() {
	srand(time(NULL));
	ofstream out ("dane.txt");
	
	for (int i=0 ; i<N ; i++ ) {
		int x = rand();
		out << x % 1000 + 1 <<"\n";
	}	
	out.close();
}
