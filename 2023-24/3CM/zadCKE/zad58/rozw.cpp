#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

vector<pair<int,int>> V1;
vector<pair<int,int>> V2;
vector<pair<int,int>> V3;

int AnyToDec(string,int);
void readData() {
	ifstream in1 ("dane_systemy1.txt");	
	for (int i=0 ; i<1095 ; i++) {
		string a,b;
		in1 >> a >> b;
		V1.push_back(make_pair(AnyToDec(a,2),AnyToDec(b,2)));
	}		
	in1.close();
	ifstream in2 ("dane_systemy2.txt");	
	for (int i=0 ; i<1095 ; i++) {
		string a,b;
		in2 >> a >> b;
		V2.push_back(make_pair(AnyToDec(a,4),AnyToDec(b,4)));
	}		
	in2.close();
	ifstream in3 ("dane_systemy3.txt");	
	for (int i=0 ; i<1095 ; i++) {
		string a,b;
		in3 >> a >> b;
		V3.push_back(make_pair(AnyToDec(a,8),AnyToDec(b,8)));
	}		
	in3.close();
}

int main() {
	readData();
	cout << V1[21].first << " " << V1[21].second<<endl;
	cout << V2[21].first << " " << V2[21].second<<endl;
	cout << V3[21].first << " " << V3[21].second;
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




