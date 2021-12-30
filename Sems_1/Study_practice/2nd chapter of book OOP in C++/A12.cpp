#include<iostream>

using namespace std;

int main(){
	float pound;
	cout << "Enter the decimal pounds: \x9c";
	cin >> pound;
	int pounds = (int)(dpound);
	float fracPounds = dpound - pounds;
	
	float shilling = fracPounds*20;
	int shillings = (int)(hilling);
	float fracShillings = shilling - shillings;
	
	int pence = (int)(fracShillings*12);
	cout<< "Equivalent in old notation: "<< pounds<<'.'<<shillings<<'.'<<pence;
	return 0;



}
