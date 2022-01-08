#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3;
	cout<<"Input first number: ";cin>>num1;
	cout<<"Input second number: ";cin>>num2;
	cout<<"Input third number: ";cin>>num3;
	if(num1<num2&&num2<num3)
	cout<<"these are in increasing order.";
	if(num1>num2&&num2>num3)
	cout<<"these are in decresing order.";
	return 0;
}
