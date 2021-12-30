#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string x;
	cout << "Give the name of data type you want to know the size of: ";
	cin >>x;
	if(x == "char"){
		cout <<"Size of "<<x<<" is: "<<sizeof(char)<<endl;	
	}
	else if(x == "int"){
		cout <<"Size of "<<x<<" is: "<<sizeof(int)<<endl;		
	}
	else if(x == "long"){
		cout <<"Size of "<<x<<" is: "<<sizeof(long)<<endl;
	}
	else if (x =="short"){
		cout <<"Size of "<<x<<" is: "<<sizeof(short)<<endl;
	}
	else if (x =="float"){
		cout <<"Size of "<<x<<" is: "<<sizeof(float)<<endl;
	}
	else if (x =="bool"){
		cout <<"Size of "<<x<<" is: "<<sizeof(bool)<<endl;
	}
	else if(x=="double"){
		cout <<"Size of "<<x<<" is: "<<sizeof(double)<<endl;
	}
	else { 
		cout<<"Invalid Data type (at least programmer didn't put this value in it)";
	}
	return 0;
}
