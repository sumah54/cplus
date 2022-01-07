//digits_reader
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char ch; //taking numbers
	unsigned long num = 0; //going to hold number
	cout<<"Enter a number: "; //asking for number
	while ((ch =getche()) != '\r'){
		
		num = num* 10 + ch - '0';
	}
	cout <<"\nNumber is: "<<num <<endl;
	return 0;
	
}
