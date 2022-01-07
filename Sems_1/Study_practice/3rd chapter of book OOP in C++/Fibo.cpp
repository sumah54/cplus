//fibonancci_series
#include<iostream>
/* fabonanci last nu + first nu */
using namespace std;

int main()
{
	unsigned long limit = 12365680;
	int a=0,b=1;
	cout << a;
	for(int sum;sum<limit;){
		sum = a+ b;
		cout <<" "<< sum<< " ";
		a=b;
		b = sum;
	}
	return 0;
	
}
