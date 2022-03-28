#include<iostream>

using namespace std;

int main(){
	int number,factorial=1;
	cout<<"Number: ";cin>>number;
	for (int x=number;x>0;x--){
		factorial*=x;
	}
	cout<<"Factorial: "<<factorial;
	return 0;
}
