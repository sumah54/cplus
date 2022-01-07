//temperature_convertor
#include<iostream>

using namespace std;

int main(){
	float cel,far;
	int x;
	cout<<"Type 1 to convert Celsius to Fahrenheit: \n"
		<<"     2 to convert Fahrenheit to Celsius: ";
		cin >>x;
		if(x==1){
		cout<<"Enter temperature in Celsius: ";
		cin >>cel;
		float ans= (1.8* cel) + 32;
		cout <<"In Fahrenheit temperature will be: "<<ans;
	}
		if(x==2){
			cout<<"Enter temperature in Fahrenheit: ";
			cin >>far;
			float ans= 0.5555555*(far-32);
			cout<<"In Celcius temperature will be: "<< ans;
		}
}
