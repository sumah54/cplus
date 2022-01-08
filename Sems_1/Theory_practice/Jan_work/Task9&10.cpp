#include<iostream>

using namespace std;

int main(){
	int num1,num2,num3;
	cout<<"Input the 1st number: ";
	cin >>num1;
	cout<<"Input the 2nd number: ";
	cin >>num2;
	cout<<"Input the 3rd number: ";
	cin >>num3;
	if(num1 >num2 && num1 > num3)
		cout<<"The greatest: "<<num1;
	if(num2 > num1 && num2 >num3)
		cout<<"The greatest: "<<num2;
	if(num3> num1 && num3 > num1)
		cout<<"The greatest: "<<num3;
	if(num1==num2&&num1==num3)
		cout<<"All numbers are equal";
	return 0;
}	
