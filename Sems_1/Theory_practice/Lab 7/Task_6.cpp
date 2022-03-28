#include <iostream>

using namespace std;
int swap(int&,int&);
int main(){
	int a,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	swap(a,b);
	return 0;
}

int swap(int& a,int& b){
		int sw=0;
		sw = a;
		a =b;
		b = sw;
		cout<<a<<endl<<b;
}
