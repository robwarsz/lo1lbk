#include <iostream>
#include <cmath>
#include <vector>
using namespace std;



int main() {
  const int N=1e6;	
  bool zbior[N] = {0};
  
  for (int i = 2; i*i <= N; i++) {
    if (zbior[i] == 0) {
      for (int j = i*i; j <= N; j+=i) {
        zbior[j] = 1;
      }
    }
  }
  
  for (int i = 2; i < 100; i++) {
    if (zbior[i] == 0) {
      cout << i << ", ";
    }
  }
//  cout << "\b";
}
