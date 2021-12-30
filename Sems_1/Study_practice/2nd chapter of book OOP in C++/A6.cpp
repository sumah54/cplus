#include<iostream>

using namespace std;
int main(){
	const float us = 1.487;
	const float franc = 0.172; //constant values of currency
	const float mark = 0.584;
	const float yen = 0.00955;
	float dollar; //defining variable
	cout << "Enter the amount of dollars : $";
	cin >> dollar; //asking the dollar
	cout << "Amount in dollars is: "<< dollar<<endl; //USD  values
	cout << "Amount in franc is: "<< dollar * franc << endl; //franc values
	cout << "Amount in deutschemark is: "<< dollar * mark << endl; //deutschemark values
	cout << "Amount in Japanese yen is: "<< dollar *yen << endl; // yen values
}
