#include<iostream>

using namespace std;

int main(){
	for (int x=1;x<=163;x++){
		if(x<10)
		cout<<"20SW00"<<x<<endl;
		else if(x<100)
		cout<<"20SW0"<<x<<endl;
		else
		cout<<"20SW"<<x<<endl;
	}
	return 0;
}
