#include<iostream>

using namespace std;

int main(){
	int pay;
	cout<<"Any your pay to find out your designation: ";cin>>pay;
	if(pay >=10000 && pay<=20000)
	cout<<"You are Manager Operations.";
	if(pay >=20000&&pay<=30000)
	cout<<"You are Manager.";
	if(pay >=30000&&pay<=40000)
	cout<<"You are Area Manager.";
	if(pay >=40000&&pay<=50000)
	cout<<"You are Regional Manager";
	return 0;
}
