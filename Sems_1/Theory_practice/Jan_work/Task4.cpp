#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char c;
	cout<<"Enter any alphabet: ";
	cin>>c;
	//c = getche();
	//cout<<c;
	if(c>=65&&c<=90)
	cout<<"upper-case";
	else
	cout<<"lower-case";
	return 0;
	
}
