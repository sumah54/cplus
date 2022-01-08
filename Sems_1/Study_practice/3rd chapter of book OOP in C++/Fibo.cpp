//fibonancci_series
#include<iostream>
/* fabonanci last nu + first nu */
using namespace std;

int main()
{
	unsigned long limit = 12365680; //limit of number
	int a=0,b=1; //first and last number
	cout << a; 
	for(int sum;sum<limit;){
		sum = a+ b; //sum of two numbers
		cout <<" "<< sum<< " "; //result of two numbers
		a=b; //assigning the value of last number to first number
		b = sum; //sum of numbers are assigned to last number
	}
	return 0;
	
}
