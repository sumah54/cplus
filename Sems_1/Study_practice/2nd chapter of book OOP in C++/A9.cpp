#include<iostream>

using namespace std;
int main (){
	int a,b,c,d; //defining variables
	char e; // "/" character in the input
	int sum1,sum2;
	
	cout << "Enter the 1st fraction: ";
	cin >> a>>e>>b; //asking input (1/2)
	cout << "Enter the 2nd Fraction: ";
	cin >> c>>e>>d;//asking input (2/5)
	sum1 = a*d + c*b;
	sum2 = b*d;
	cout << "Sum = "<< sum1 << "/"<<sum2; // answer (9/10)
	
	
}
