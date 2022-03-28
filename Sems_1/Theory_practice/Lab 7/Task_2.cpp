//task_2
#include <iostream>

using namespace std;
int zerosmaller(int&,int&);
int main(){
	int a,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"So, smaller number you enter was "<<zerosmaller(a,b);
	cout<<a<<endl<<b;
	return 0;
}
int zerosmaller(int& a, int& b){
	if(a<b){
		a=0;
		return a;
		}
	else{
		b=0;
		return b;
	}
} 
