#include <iostream>
using namespace std;


string DecToBin(int L) {
  string wynik = "";
  string znaki = "01";
    
  while (L > 0) {
    wynik = znaki[L%2] + wynik; 
    L /= 2;
  }
  return wynik;
}

string decToBinFrac(float u) {
	int tmp=u;
	u-=tmp;		
  string value = "";
  for (int i =0; i < 15; i++) {
    (u*2 >= 1) ? value += '1' : value += '0';
    (u*2 >= 1) ? u = u*2 - 1 : u = u*2;
  }
  while(value[value.size()-1]=='0') {
    value.erase(value.size()-1);
  }  
  return value;
}

int main() {
	float x=10.125;
	cout << DecToBin(x);		
    cout <<"."<< decToBinFrac(x);
}

