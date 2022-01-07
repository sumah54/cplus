//arthematic_calculator_in_a_loop
#include<iostream>

using namespace std;

int main(){
	char c,d;
	float num1,num2,ans;
	do{
		cout <<"Enter first number, operator, second number: ";
		cin >>num1>>c>>num2;
		switch(c){
			case '+': ans = num1 + num2; break;
			case '-': ans = num1 -num2; break;
			case '*': ans = num1 *num2; break;
			case '/': ans = num1 /num2; break;
			default: ans = 0;
		}
		cout <<"Answer = "<< ans<<endl;
		cout <<"Do you wish to solve another (y/n): ";cin >>d;
		
	}while(d != 'n');
}
