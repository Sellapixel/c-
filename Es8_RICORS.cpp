#include <iostream>
using namespace std;
int Scale(int g){
	if(g<=1) return 1;
	return Scale(g-1) +  Scale(g-2);
}

int main(){
	int NumeroGradini;
	cout <<"Inserisci quanti gradini: ";
	cin>>NumeroGradini;
	
	cout <<"\nCi sono "<< Scale(NumeroGradini) <<" modi per salire\n";
	return 0;
}
