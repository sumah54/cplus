#include<iostream>

using namespace std;
int main(){
	const float per = 7.481; //constant number
	float x; //declare a float number
	cout << "Enter number of gallons to convert in cubic feet: ";
	cin >> x; // asking the user to give input (7.481)
	x /= per; //result (1)
	cout <<"Gallons in cubic feet is: "<< x<< endl; //output result
	return 0;
	
}
