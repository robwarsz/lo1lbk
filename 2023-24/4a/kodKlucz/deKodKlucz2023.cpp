#include<iostream>
using namespace std;

string kod(string napis, string k ) {
	for (auto &el:k)
		el=toupper(el);
	int poz=0;
	for (int i=0 ; i<napis.size() ; i++){
		if (napis[i]>='A' && napis[i]<='Z') {	
			int L = int(napis[i])-65;
			L += 26-(k[poz]-65);	
			napis[i] = (L % 26) + 65;
			
			}
		else		
		if (napis[i]>='a' && napis[i]<='z') {
			int L = int(napis[i])-97;
			L += 26 - (k[poz]-65);		
			napis[i] = (L % 26) + 97;
		}
		poz++;
		poz%=k.size();
		//cout<<"\n"<<int(napis[i]);	
	}	
	return napis;
}

int main() {
	string napis="Zcrrsl - tixio zvmqvywsukrgk uiwmumcqs zsxsske mqsjxiey nbdcjrymdcxmy, m vmjfsnsukrww nkogoggo zsfjssroo cxyxhybhmgcar, uxmbiey gniy tpjiuyhlse tiqd ajcroplywa m upybsuxsqm iyhs dpyhjyacqs. Ncqs cojkhlse miaryho qsi zvxonpjcqdsqmmy m jagodjywase. Twdlmx uctgovy vmjrc tybebikkkxw tpykpkqmgelse: szsiidsui, sqnovydcuxc yvyj u qlsihcdww qdsnxms jsxoainli. Zsqsebk u tcvrg hwxeksgxxc ccqdik xwzsu m kyryqydcajrc dybdyndyxmc tywmcmmy, zohym u xww nyhmlrww by hodwusu Tcbp, Vslc, Wariko ajc Dgj. Nyhmlrgo hko srlo hodwum nclkqgmdlo howr gxowry sjcukrw nyus tixio copitryaw. Gxxcbtpoxcbc Zcrrslk qk bywrotlo lk usijo qiwroqmg mzipkgwtrwml. Twdlmx pydusnyxc tiqd hkom tpyncux Ytcx Qyypmi jepjebjeli nbdcj Nixfyr Csddaybi Pssxhydmmx, uxmbe tiqd mbkyxmxkghk lyr-zvmpmr. Qdelnepnsuk gwtjoqcxxymny ncjcik howr GNixfyr (ryzmqkrw a M), ejo gcxlsihk rod srlo, xt. Nwdlmx (xenswyxc g Hkzgo), GJZcrrsl ryzmqkrw a Mskwsl Pgct, MpyrNixfyr (ry tjkxdyvko .XIR) g TwZc (ryzmqkrw a Zcrrslsi, dml. lsmdwrben).";
	string klucz="key";	
//	string napis;
//	getline (cin,napis);	
	cout<<kod(napis,klucz);

	
}
