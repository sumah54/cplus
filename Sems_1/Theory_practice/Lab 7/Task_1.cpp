//Task_1
#include<iostream>

using namespace std;
int Largernum(int, int);
int main(){
	int a,b;
	cout<<"Enter first number: ";cin>>a;
	cout<<"Enter second number: ";cin>>b;
	cout<<"Largest number is: "<<Largernum(a,b);
	return 0;
}

int Largernum(int a,int b){
	if(a>b){
		//cout<<"Largest number is: "<<a;
		return a;
		}
	else{
		//cout<<"Largest number is: "<<b;
		return b;
}
}
