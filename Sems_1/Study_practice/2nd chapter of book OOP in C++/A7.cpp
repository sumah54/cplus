#include<iostream>

using namespace std;
int main(){
	float cel; //value in celcius
	float far; // value in fahrenheit
	cout << "Temperature in Celsius: ";
	cin >> cel;// asking for value (100)
	far =  (/*9/5*/1.8*cel)+32; //solving problem
	cout << "Then, temperature in Fahrenheit is: "<< far<< endl; //output of answer (212)
	
}
