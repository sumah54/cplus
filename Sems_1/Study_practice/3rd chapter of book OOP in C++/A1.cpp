//Table of numbers upto 20 times
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: ";
	cin >>num;
	for (int y=1; y<= 200;y++){
		cout<<setw(5) <<num * y<< setw(5);
		if (y%10 == 0){
			cout<<endl;
		}
	}
	return 0;
}
