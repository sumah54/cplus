#include<iostream>

using namespace std;

int main(){
	char first,second,output;
	int count;
	cout<<"Enter first character: ";cin>>first;
	cout<<"Enter second character: "; cin>>second;
	cout<<"Characters between '"<<first <<"' and '" <<second<<"' are: ";
	for(int x=first+1;x<second;x++){
		output=x;
		cout<<output<<' ';
		++count;
	}
	cout<<"\nand Characters count: "<<count;
	return 0;
}
