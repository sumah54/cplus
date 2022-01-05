#include<iostream>
/* fabonanci last nu + first nu */
using namespace std;

int main()
{
	int a=0,b=1;
	cout << a;
	for(;;){
		int sum = a+ b;
		cout <<" "<< sum<< " ";
		a=b;
		b = sum;
	}
	return 0;
	
}
