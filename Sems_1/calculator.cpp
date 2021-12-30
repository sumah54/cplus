#include<iostream>

//arthematic calculator using if statements


using namespace std;

int main(){
	float a,b,answer;
	char in;
	cout << "Enter 1st number: ";
	cin >> a; //first number (2) 
	cout << "Enter 2nd number: ";
	cin >>b; //second number (4)
	cout << "Enter the operator you want to be done. (+,-,x,/): ";
	cin >> in;
	if (in == '+')
	{
    answer = a + b;
		cout << "Sum of "<<a <<" + "<<b<<" is: "<<(answer)<<endl;
	}
	if (in == '-')
	{
		answer = a - b;
		cout << "Difference of "<<a <<" - "<<b<<" is: "<<(answer)<<endl;
	}
	if (in == 'x' or in == 'X')
	{
		answer = a * b;
		cout << "Multiplication of "<<a <<" X "<<b<<" is: "<<(answer)<<endl;
	}
	if (in == '/')
	{
		answer = a / b;
		cout << "Division of "<<a <<" / "<<b<<" is: "<<(answer)<<endl;
	}
return 0;
}