#include<iostream>

using namespace std;

int main(){
	int num1;
	cout<<"Enter number: ";
	cin >>num1;
	//cout <<num1%2<<endl;
	if(num1%2==0){
		if(num1==0){	
			num1 = 10;
			cout<<num1*num1*num1;
		}
		else
		cout<<num1+1;
	}
	if(num1%2==1){
		cout<<num1*num1;
	}
	return 0;
}
