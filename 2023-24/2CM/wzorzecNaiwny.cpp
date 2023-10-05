#include <iostream>
using namespace std;

string tekst = "matematyka, fizyka i informatyka ttt";
string wzorzec = "tyk";

bool czyWzorzec(int n) {
  for (int j=n+1 , k=1 ; k<wzorzec.size() ; j++ , k++)
    if (tekst[j]!=wzorzec[k])
      return false;
  return true;
}

void znajdzWzorzec() {
  for (int i=0 ; i<=tekst.size()-wzorzec.size() ; i++)
    if (tekst[i]==wzorzec[0] && czyWzorzec(i))
      cout<<i<<" ";
}

int main() {
  znajdzWzorzec();
}
