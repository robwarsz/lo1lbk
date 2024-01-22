#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

const int N = 20;
struct item { 
	int capacity;
	int value;
	float ratio;
};
item items[N];

bool cmp (item A, item B) {
	if (A.ratio==B.ratio)
		return A.capacity>B.capacity;
	return A.ratio>B.ratio;
}

int main() {
	int p,n,a,b,backpack=0;
	ifstream file ("dane.txt");
	file >> p >> n;
	for (int i=0;i<n;i++) {
		file >> a >> b;
		items[i].capacity = a;
		items[i].value = b;
		items[i].ratio = (float)b/(float)a;
	}
	sort(items,items+n,cmp);	
	for (auto el:items) {
		cout << "\n" << el.capacity << "\t" << el.value << "\t" << el.ratio;
	}
	cout<<"\nwynik: ";
;	for (int i=0;i<n;i++) {
		if (p-items[i].capacity >= 0) {
			cout<<i<<" ";
			p -= items[i].capacity;
			backpack+=items[i].value;
			}
	}
	cout<<"\nWartos plecaka: "<<backpack;	
}
