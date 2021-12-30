#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	float pounds,shellings,pence;
	cout<< "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shellings;
	cout<<"Enter pence: ";
	cin>> pence;
	
	float totalPenace = (pence /(12*20)) + shellings/20;
	float totalPounds = pounds + totalPenace;
	cout << "Decimal pounds = \x9c"<< totalPounds<<endl;
	return 0;
	
}
