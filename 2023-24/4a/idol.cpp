#include<iostream>
#include<vector>
using namespace std;

vector<int> V[100];

int getIdol(int);
int checkIdol(int,int);

int main() {
	int W,K,x,y;
	cin >> W >> K;
	
	while(K--) {
		cin >> x >> y;
		V[x].push_back(y);		
	}
	
	for (int i=1 ; i<=W ; i++) {
		cout<<"\n"<<i<<": ";
		for (int j=0 ; j<V[i].size() ; j++)
			cout << V[i][j]<<", ";
	}	
	cout<<"\nIdol: "<<getIdol(W);
}

int getIdol(int W){
	for (int i=1 ; i<=W ; i++)
		if (V[i].size()==0)
			if (checkIdol(i,W))
				return i;
			else return 0;	
	return 0;		
}

int checkIdol(int x,int W){
	for (int i=1 ; i<=W ; i++) 
		if (i!=x) {
			bool isIn=false;
			for (int j=0; j<V[i].size() ; j++)
				if (V[i][j]==x)
					isIn=1;
			if (!isIn)
				return 0;
		}
	return 1;	
}















