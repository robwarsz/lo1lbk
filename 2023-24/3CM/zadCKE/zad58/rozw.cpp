#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

vector<pair<int,int>> V1;
vector<pair<int,int>> V2;
vector<pair<int,int>> V3;

int AnyToDec(string,int);

int main() {
	cout << AnyToDec("-1111",2)<<endl;
	cout << AnyToDec("-123123",4)<<endl;
	cout << AnyToDec("123123",4)<<endl;
}

int AnyToDec(string S, int sys) {
	bool negativeNumber = false;
	if (S[0] == '-') {
		negativeNumber = true;
		S.erase(0,1);
	}	
	int value = 0;
	for (int i=0 ; i<S.size() ; i++)		
		value = value * sys + S[i]-'0';
	if (negativeNumber)
		return -value;
	return value;			
}




